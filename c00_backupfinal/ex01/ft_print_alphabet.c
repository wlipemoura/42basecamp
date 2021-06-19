#include <unistd.h>

void	ft_print_alphabet(void)
{	
	char	cont;

	cont = 'a';
	while (cont <= 'z')
	{
		write (1, &cont, 1);
		cont++;
	}
}
