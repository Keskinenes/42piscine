/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enkeskin <enkeskin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 12:33:24 by enkeskin          #+#    #+#             */
/*   Updated: 2022/03/31 11:20:28 by enkeskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	degisim;

	degisim = *a;
	*a = *b;
	*b = degisim;
}

int	main()
{
	int x;
	int y;

	x = 14;
	y = 56;
	ft_swap(&x, &y);
	printf("%d, %d", x, y);
}
