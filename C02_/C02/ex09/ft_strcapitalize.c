/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enkeskin <enkeskin@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 13:39:18 by enkeskin          #+#    #+#             */
/*   Updated: 2022/04/03 13:39:20 by enkeskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 65 && *str <= 90)
			*str += 32;
		str++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	i1;

	i = 0;
	i1 = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (97 <= str[i] && str[i] <= 122)
		{
			if (i1 == 1)
				str[i] -= 32;
			i1 = 0;
		}
		else if (48 <= str[i] && str[i] <= 57)
			i1 = 0;
		else
			i1 = 1;
		i++;
	}
	return (str);
}
