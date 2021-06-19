#include <stdio.h>

char	*ft_strcpy (char *dest, char *src)
{
	int		counter;

	counter = 0;
	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
/*int main(void)
{
	char dest[8];
	char *src;

	src = "maioral";

	ft_strcpy(dest, src);
	printf("%s", dest);
	return(0);
}*/
