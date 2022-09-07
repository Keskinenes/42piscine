/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enkeskin <enkeskin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:11:06 by enkeskin          #+#    #+#             */
/*   Updated: 2022/03/31 11:11:35 by enkeskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	degisim;

	i = 0;
	size--;
	while (i < size)
	{
		degisim = tab[i];
		tab[i] = tab[size];
		tab[size] = degisim;
		i++;
		size--;
	}
}
