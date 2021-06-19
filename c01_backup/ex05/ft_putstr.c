#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char *str = "alow galera\n";

	ft_putstr(str);
	return (0);
}


void	ft_putstr(char *str)
{
	int		n;

	n = 0;
	while (*(str + n) != '\0')
	{
		write (1, &(*(str + n)), 1);
		n++;
	}
}
