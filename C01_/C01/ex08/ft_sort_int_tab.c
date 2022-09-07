/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enkeskin <enkeskin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:11:52 by enkeskin          #+#    #+#             */
/*   Updated: 2022/03/31 14:18:47 by enkeskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	havuz;

	i = 0;
	size--;
	while (i < size)
	{
		if (tab[i] < tab[i + 1])
			i++;
		else
		{
			havuz = tab [i];
			tab[i] = tab [i + 1];
			tab [i + 1] = havuz;
			i = 0;
		}
	}	
}

