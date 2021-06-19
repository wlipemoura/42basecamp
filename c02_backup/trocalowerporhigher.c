//#include <stdio.h>

char *ft_strupcase(char *str)
{
	int		dist;
	int		i;

	dist = 'a' - 'A';
	i = 0;
	while (*(str + i) != '\0')
	{
		if('a' <= *(str + i) && *(str + i) <= 'z')
			{
			printf("antes: %c\n", *(str + i));
			*(str + i) = *(str + i) - dist;
			printf("depois: %c\n", *(str + i));
			}
		else if('A' <= *(str + i) && *(str + i) <= 'Z')
			{
				printf("antes: %c\n", *(str + i));
				*(str + i) = *(str + i) + dist;
				printf("depois: %c\n", *(str + i));
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
	ft_strupcase(str1);
	ft_strupcase(str2);
	ft_strupcase(str3);
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("str3: %s\n", str3);
	return (0);
}*/
