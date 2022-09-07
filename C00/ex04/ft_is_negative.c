/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enkeskin <enkeskin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 13:06:37 by enkeskin          #+#    #+#             */
/*   Updated: 2022/03/27 16:16:52 by enkeskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int a)
{
	if (a >= 0)
	{
		write(1, &"P", 1);
	}
	else
	{
		write(1, &"N", 1);
	}
}

int	main()
{
	ft_is_negative(-42);
}
