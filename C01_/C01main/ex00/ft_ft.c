/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enkeskin <enkeskin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 10:53:36 by enkeskin          #+#    #+#             */
/*   Updated: 2022/03/31 11:13:50 by enkeskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main()
{
	int i;
	int *nbr;

	nbr = &i;
	ft_ft(nbr);
	printf("%d", i);
}
