#include <stdio.h>

int ft_str_is_printable(char *str)
{	
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] < 32) || (str[i] > 126)))
			{
			return(0);
			}
		i++;
	}
	return(1);
}

int main(void)
{
	char *str;
	char number;

	str = "Abcde35z;*";
	number = ft_str_is_printable(str);
	
	printf("%d", number);
	return(0);
}
/*exemplo com negação de if
int	ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= ' ' && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
