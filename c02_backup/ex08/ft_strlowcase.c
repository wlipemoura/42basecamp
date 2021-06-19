//#include <stdio.h>

char *ft_strlowcase(char *str)
{
	int		dist;
	int		i;

	dist = 'a' - 'A';
	i = 0;
	while (*(str + i) != '\0')
	{
		if('A' <= *(str + i) && *(str + i) <= 'Z')
			{
			*(str + i) = *(str + i) + dist;
			}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char str1[] = "abcdefghi";
	char str2[] = "AbcDefGhI";
	char str3[] = "ABCDEFGHI";

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	ft_strlowcase(str1);
	ft_strlowcase(str2);
	ft_strlowcase(str3);
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	return (0);
}*/

