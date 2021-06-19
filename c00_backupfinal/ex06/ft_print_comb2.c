#include <unistd.h>

void	ft_putchar(int a, int b, int c, int d)
{
	char	space;

	space = ' ';
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &space, 1);
	write (1, &c, 1);
	write (1, &d, 1);
}

void	comma(int a, int b)
{
	char	comma;
	char	space;

	comma = ',';
	space = ' ';
	if (a != '9' || b != '8')
	{
		write (1, &comma, 1);
		write (1, &space, 1);
	}
}

void	cond(int a, int b, int c, int d)
{
	while (b <= '9')
	{
		while (c <= '9')
		{
			while (d <= '9')
			{
				ft_putchar(a, b, c, d);
				comma(a, b);
				d++;
			}
			d = '0';
			c++;
		}
		b++;
		if (b == '9')
		{
			c = a + 1;
			d = '0';
		}
		else
		{	
			d = b + 1;
			c = a;
		}
	}
}

void	ft_print_comb2(void)
{
	int	comb1[2];
	int	comb2[2];

	comb1[0] = '0';
	comb1[1] = '0';
	comb2[0] = '0';
	comb2[1] = '1';
	while (comb1[0] <= '9')
	{
		cond(comb1[0], comb1[1], comb2[0], comb2[1]);
		comb1[0]++;
		comb1[1] = '0';
		comb2[0] = comb1[0];
		comb2[1] = comb1[1] + 1;
	}
}
