/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enkeskin <enkeskin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:04:38 by enkeskin          #+#    #+#             */
/*   Updated: 2022/03/27 16:13:42 by enkeskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{		
	write(1, &c, 1);
}

void	ft_print_alphabet(void)
{
	char	harf;

	harf = 97;
	while (harf <= 122)
	{
		ft_putchar(harf);
		harf++;
	}
}
