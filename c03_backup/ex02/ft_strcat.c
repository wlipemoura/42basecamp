#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *ft_strcat(char *dest, char *src)
{
	int		counter_d;
	int		counter_s;

	counter_d = 0;
	counter_s = 0;
	while (*(dest + counter_d) != '\0')
		counter_d++;//quando esse laço parar, counter_d me levará para o caractere nulo da posição dest.
	while(*(src + counter_s) != '\0') //agora a posição dest já não é mais nula, então entro neste laço
	{	*(dest + counter_d) = *(src + counter_s);
		counter_s++;
		counter_d++;//aqui, a partir do caractere seguinte ao que anteriormente era nulo em destiny, é realocado o segundo caractere de source, até que 
	}
	*(dest + counter_d) = '\0';//CONFIRMAR ESTA LINHA
	return(dest);
}

int	main(void)
{
	char *src;
	char *dest;
	char *ft_src;
	char *ft_dest;
	char *result;
	char *ft_result;

	src = calloc(7, sizeof(char));
	dest = calloc(12, sizeof(char));
	ft_src = calloc(7, sizeof(char));
	ft_dest = calloc(12, sizeof(char));
	strcpy(src, "galera");
	strcpy(dest, "alo ");
	strcpy(ft_src, "galera");
	strcpy(ft_dest, "alo ");
	result = strcat(dest, src);
	ft_result = ft_strcat(ft_dest, ft_src);
	if (ft_dest != ft_result)
		printf("KO, return value of ft_strcar is different of ft_dest. ft_strcar=%p ft_dest=%p\n", ft_result, ft_dest);
	else if (strcmp(result, ft_result) != 0)
		printf("KO, value returned from strcmp with ft_strcat and strcat is different of zero(%d).\n", strcmp(result, ft_result));
	else
		printf("OK.\nresult: %s\n", ft_result);
	return (0);
}
