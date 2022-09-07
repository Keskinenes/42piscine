/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_prgoram_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enkeskin <enkeskin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:07:00 by enkeskin          #+#    #+#             */
/*   Updated: 2022/04/13 12:21:17 by enkeskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (av[0][i] && ac)
	{
		write(1, &av[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
