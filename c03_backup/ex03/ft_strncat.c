char *ft_strncat(char *dest, char *src, unsigned int nb) 
{
	unsigned int	cntd;
	unsigned int	cnts;
	unsigned int	cntdlim;

	cntd = 0;
	cnts = 0;
	while (*(dest + cntd) != '\0')//enquanto eu estiver na posição destiny diferente da nula, execute.
		cntd++;//1 quando esse laço parar, cntd me levará para o caractere nulo da posição dest.
	cntdlim = cntd;//1 = 1
	while (cntd < (cntdlim + nb))//3 < 1 + 2 = 3 este laço será executado enquanto a posição em dest não for igual à última posição prevista, já considerando a inserção da source (cntdlim + n)
	{//NB NA VERDADE SE REFERE AO VALOR DA STRING FINAL: COLOCAR NESTE WHILE APENAS O NB
		*(dest + cntd) = *(src + cnts);//aqui eu realoco o caractere nulo de dest pelo primeiro caractere de source
		cnts++;//2
		cntd++;//3
	}//quando eu sair deste laço, estarei na última posição da string dest final, mas ainda sem o '\0'
	if(cntd == cntdlim + nb ) //isso significa que cntd é igual a ctdlim + n. Logo, nessa posição, deve ser alocado o '\0'
	{	
		*(dest + cntd) = '\0';
	}
	return(dest);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb);

int	main(void)
{
	int 	nb;
	char	*src;
	char	*dest;
	char	*ft_src;
	char	*ft_dest;
	char	*buff;
	char	*ft_buff;

	src = calloc(7, sizeof(char));
	dest = calloc(12, sizeof(char));
	ft_src = calloc(12, sizeof(char));
	ft_dest = calloc(12, sizeof(char));
	strcpy(src, "galera");
	strcpy(ft_src, "galera");
	strcpy(dest, "alo ");
	strcpy(ft_dest, "alo ");
	nb = 13;
	buff = strncat(dest, src, nb);
	ft_buff = ft_strncat(ft_dest, ft_src, nb);
	if (ft_dest != ft_buff)
		printf("[1] KO, return value from ft_strncat is different of ft_dest. ft_strncat=%p ft_dest=%p\n", ft_buff, ft_dest);
	else if (strcmp(buff, ft_buff) != 0)
	{
		printf("[1] KO, strcmp between ft_dest and dest is different of 0(%d)\n", strcmp(buff, ft_buff));
		return (1);
	}
	else
		printf("[1] OK, nb = %02d, result=%s\n", nb, ft_buff);
	nb = 4;
	strcpy(src, "galera");
	strcpy(ft_src, "galera");
	strcpy(dest, "alo ");
	strcpy(ft_dest, "alo ");
	buff = strncat(dest, src, nb);
	ft_buff = ft_strncat(ft_dest, ft_src, nb);
	if (ft_dest != ft_buff)
		printf("[2] KO, return value from ft_strncat is different of ft_dest. ft_strncat=%p ft_dest=%p\n", ft_buff, ft_dest);
	else if (strcmp(buff, ft_buff) != 0)
	{
		printf("[2] KO, strcmp between ft_dest and dest is different of 0(%d)\n", strcmp(buff, ft_buff));
		return (1);
	}
	else
		printf("[2] OK, nb = %02d, result=%s\n", nb, ft_buff);
	nb = 0;
	strcpy(src, "galera");
	strcpy(ft_src, "galera");
	strcpy(dest, "alo ");
	strcpy(ft_dest, "alo ");
	buff = strncat(dest, src, nb);
	ft_buff = ft_strncat(ft_dest, ft_src, nb);
	if (ft_dest != ft_buff)
		printf("[3] KO, return value from ft_strncat is different of ft_dest. ft_strncat=%p ft_dest=%p\n", ft_buff, ft_dest);
	else if (strcmp(buff, ft_buff) != 0)
	{
		printf("[3] KO, strcmp between ft_dest and dest is different of 0(%d)\n", strcmp(buff, ft_buff));
		return (1);
	}
	else
		printf("[3] OK, nb = %02d, result=%s\n", nb, ft_buff);
	return (0);
}
