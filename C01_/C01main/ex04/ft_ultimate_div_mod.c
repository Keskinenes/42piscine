/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enkeskin <enkeskin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:41:04 by enkeskin          #+#    #+#             */
/*   Updated: 2022/03/31 12:47:59 by enkeskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int	main()
{
	int	x;
	int	y;
	
	x = 24;
	y = 10;
	ft_ultimate_div_mod(&x, &y);
	printf("%d, %d", x, y);

}
