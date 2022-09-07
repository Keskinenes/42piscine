/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enkeskin <enkeskin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:08:06 by enkeskin          #+#    #+#             */
/*   Updated: 2022/04/13 12:24:10 by enkeskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = ac - 1;
	while (j > 0)
	{
		i = 0;
		while (av[j][i] && ac)
		{
			write(1, &av[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j --;
	}
	return (0);
}
