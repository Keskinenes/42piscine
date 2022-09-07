/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enkeskin <enkeskin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 11:11:52 by enkeskin          #+#    #+#             */
/*   Updated: 2022/03/31 14:17:56 by enkeskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
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
			havuz = tab[i];
			tab[i] = tab[i + 1];
			tab [i + 1] = havuz;
			i = 0;
		}
	}
}

int	main()
{
	int tab[5] = {10,1,2,6,4};
	int size = 5;
	int i;
	ft_sort_int_tab(tab,size);
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
}
