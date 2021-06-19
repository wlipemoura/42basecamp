#include <unistd.h>

void	ft_print_numbers(void)
{
	char	cont;

	cont = '0';
	while (cont <= '9')
	{
		write(1, &cont, 1);
		cont++;
	}
}
