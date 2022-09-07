/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enkeskin <enkeskin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:21:23 by enkeskin          #+#    #+#             */
/*   Updated: 2022/04/12 15:21:25 by enkeskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_factorial(int nb)
{
	int		result;

	result = 1;
	if (nb > 0)
	{
		result *= nb * ft_recursive_factorial (nb - 1);
		nb -= 1;
	}
	if (nb < 0)
		return (0);
	return (result);
}
