#include <stdio.h>

int lowcase(char *str, int *i)
{
	int dist;

	dist = 'a' - 'A';
	if (*i == 0)//Se sim, é o primeiro caractere?
		*(str + *i) = *(str + *i) - dist;//Se for o primeiro caractere e for minúscula,faça essa letra maiúscula;
	else //Se não for o primeiro caractere, antes dele, tem um caractere especial e não numérico?
		if (*(str + *i - 1) < '0' ||
			*(str + *i - 1) > 'z' ||
			(*(str + *i - 1) > 'Z' && *(str + *i - 1) < 'a') ||
			(*(str + *i - 1) > '9' && *(str + *i - 1) < 'A'))
			{
			*(str + *i) = *(str + *i) - dist;//Se sim, faça essa letra maiúscula;
			}
	return(0);
}

int uppercase(char *str, int *i)
{
	int dist;

	dist = 'a' - 'A';
	if (*i == 0)//Se sim, é o primeiro caractere?
		*(str + *i) = *(str + *i);//Se for o primeiro caractere, não faça nada
	else //Se não for o primeiro caractere, antes dele, tem um caractere especial e não numérico?
		if (*(str + *i - 1) < '0' ||
			*(str + *i - 1) > 'z' ||
			(*(str + *i - 1) > 'Z' && *(str + *i - 1) < 'a') ||
			(*(str + *i - 1) > '9' && *(str + *i - 1) < 'A'))
			{
			*(str + *i) = *(str + *i);//Se sim, não faça nada;
			}
		else
			*(str + *i) = *(str + *i) + dist;//Se não, faça ela minúscula.
	return(0);
}

char *ft_strcapitalize(char *str)
{
	int i;
	int dist;
	int *ptr;
	char **ptrstr;

	i = 0;
	ptr = &i;
	ptrstr = &str;
	dist = 'a' - 'A';
	while (*(str + i) != '\0')
	{
		if (*(str + i) >= 'a' && *(str + i) <= 'z')//É uma letra minúscula?
			{
				lowcase(str, ptr);
			}
		else if (*(str + i) >= 'A' && *(str + i) <= 'Z')//É uma letra maiúscula?
		{
			uppercase(str, ptr);
		}
		i++;
	}
	return(0);
}

int	main(void)
{
	char str1[] = "alo maluco 42beleza!";
	char str2[] = "ALO MALUCO 42BELEZA!";
	char str3[] = "alo+ma|uco a2beleza!";
	char str4[] = "ALO+MALUCO*a2BELEZA!";
	char str5[] = "^uIv#= =9Hf~2y@F3A)FTzBgF";
	char str6[] = "tsR1|vn_WE}7X6{Vm2vQf(rG}qdnT`1,qH+n";

	printf("str1: %s\n", str1);
	ft_strcapitalize(str1);
	printf("str1_c: %s\n", str1);
	printf("str2: %s\n", str2);
	ft_strcapitalize(str2);
	printf("str2_c: %s\n", str2);
	printf("str3: %s\n", str3);
	ft_strcapitalize(str3);
	printf("str3_c: %s\n", str3);
	printf("str4: %s\n", str4);
	ft_strcapitalize(str4);
	printf("str4_c: %s\n", str4);
	printf("str5: %s\n", str5);
	ft_strcapitalize(str5);
	printf("str5_c: %s\n", str5);
	printf("str6: %s\n", str6);
	ft_strcapitalize(str6);
	printf("str6_c: %s\n", str6);
	return (0);
}