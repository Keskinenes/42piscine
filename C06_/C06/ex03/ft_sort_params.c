/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enkeskin <enkeskin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:08:57 by enkeskin          #+#    #+#             */
/*   Updated: 2022/04/13 13:57:43 by enkeskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] == s2[i])
			i++;
		if (s1[i] < s2[i] || s1[i] > s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = 1;
	while (j < ac - 1)
	{
		i = 1;
		while (i < ac - 1)
		{
			if (ft_strcmp(av[i], av[i + 1]) > 0)
			{
				ft_swap(&av[i], &av[i + 1]);
			}
			i++;
		}
		j++;
	}
	i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
