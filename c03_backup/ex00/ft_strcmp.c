#include <unistd.h>
#include <stdio.h>
#include <string.h>

/*FUNCIONAMENTO
strcmp(str2, str1)
return(str2 - str1)
int main(void)
{
	char *s1 = "a";
	char *s2 = "b";

	int retorno;

	retorno = strcmp(s1, s2);
	printf("%i", retorno);
}*/

int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while(*(s1 + i) != '\0' || *(s2 +i) != '\0')
	{
		if(*(s1 + i) - *(s2 +i) != 0) //ou *(s1 + i) != *(s2 +i)
			return((unsigned char)*(s1 + i) - (unsigned char)*(s2 +i));
		else if(*(s1 + i) - *(s2 +i) == 0) //ou *(s1 + i) == *(s2 +i) 
			i++;
	}
	return(0);
}

/*int main(void)
{
	char s1[] = {3};
	char s2[] = {3};
	printf("funcao original: %i \n", strcmp(s1, s2));
	printf("funcao desenvolvida: %i \n", ft_strcmp(s1, s2));
}*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char *s1;
	char *s2;
	char *s3;
	char *s4;
	char s5[] = {'a', 'b', 'c', -10, -20, '\0'};

	s1 = calloc(10, sizeof(char)); 
	s2 = calloc(8, sizeof(char)); 
	s3 = calloc(10, sizeof(char)); 
	s4 = calloc(10, sizeof(char)); 
	s1 = "abcdefghi";
	s2 = "abcdefg";
	s3 = "abcdEfghi";
	s4 = "ab0defghi";
	printf("s1: %s, s2: %s, s3: %s, s4: %s, s5: %s\n", s1, s2, s3, s4, s5);
	printf("cmp_12 = %d, og_cmp_12 = %d\n", ft_strcmp(s1, s2), strcmp(s1, s2));
	printf("cmp_13 = %d, og_cmp_13 = %d\n", ft_strcmp(s1, s3), strcmp(s1, s3));
	printf("cmp_14 = %d, og_cmp_14 = %d\n", ft_strcmp(s1, s4), strcmp(s1, s4));
	printf("cmp_15 = %d, og_cmp_15 = %d\n", ft_strcmp(s1, s5), strcmp(s1, s5));
	return(0);
}
