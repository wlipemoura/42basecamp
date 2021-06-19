#include <unistd.h>

void	ft_is_negative(int n)
{	
	char	a;
	char	b;

	a = 'N';
	b = 'P';
	if (n < 0)
		write(1, &a, 1);
	else
		write(1, &b, 1);
}
