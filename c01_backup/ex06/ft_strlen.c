#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char 	*str = "42 is amazing bro";
	int		size;

	size = ft_strlen(str);
	printf("str=\"%s\"\nstrlen=%d\n", str, size);
	return (0);
}

int	ft_strlen (char *str)
{
	int		n;

	n = 0;
	while (*(str + n) != '\0')
	{
		n++;
	}
	return (n);
}
