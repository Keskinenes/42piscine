#include <unistd.h>
#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int	main()
{
	char dest[] = "Enes";
	char src[] = "Keskin";
	printf("%s\n", ft_strcpy(dest,src));
}
