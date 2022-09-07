/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enkeskin <enkeskin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:07:34 by enkeskin          #+#    #+#             */
/*   Updated: 2022/04/09 16:03:20 by enkeskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
int	main()
{
	char str[] = "eaadasdsasdsdnes kals enes khadk enes jnlas kjkd";
	char find[] = "enes";
	printf("%s", ft_strstr(str,find));
}
