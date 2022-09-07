/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enkeskin <enkeskin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 11:16:04 by enkeskin          #+#    #+#             */
/*   Updated: 2022/03/31 11:26:38 by enkeskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main()
{
	int x;
	int y;
	int mod;
	int div;

	x = 24;
	y = 10;
	ft_div_mod(x, y, &div, &mod);
	printf(" %d, %d",div, mod);
	
}
