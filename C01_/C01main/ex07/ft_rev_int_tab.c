/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enkeskin <enkeskin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:11:06 by enkeskin          #+#    #+#             */
/*   Updated: 2022/03/31 12:09:36 by enkeskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
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

int	main()
{
	int tab[6] = {0,1,2,3,4,5};
	int size = 6;
	int i;
	ft_rev_int_tab(tab,size);
	i = 0;
	while (i < size)
	{
		printf("%d ",tab[i]);
		i++;
	}
	return 0;
	//printf("%d, %d, %d, %d, %d,%d", tab[0], tab[1], tab[2], tab[3], tab[4],tab[5]);
}
