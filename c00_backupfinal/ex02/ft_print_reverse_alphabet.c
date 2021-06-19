#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{	
	char	cont;

	cont = 'z';
	while (cont >= 'a')
	{
		write (1, &cont, 1);
		cont--;
	}
}
