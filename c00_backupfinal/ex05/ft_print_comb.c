#include <unistd.h>

void	ft_putchar (int h, int d, int u)
{
	write(1, &h, 1);
	write(1, &d, 1);
	write(1, &u, 1);
}

void	nocomma (int h, int d, int u)
{
	char	cs[2];

	cs[0] = ',';
	cs[1] = ' ';
	if (h != '7' || d != '8' || u != '9')
	{
		write (1, &cs[0], 1);
		write (1, &cs[1], 1);
	}
}

void	ft_print_comb(void)
{
	int		pos[3];

	pos[0] = '0';
	pos[1] = '1';
	pos[2] = '2';
	while (pos[0] <= '9')
	{
		while (pos[1] <= '9')
		{
			while (pos[2] <= '9')
			{
				ft_putchar(pos[0], pos[1], pos[2]);
				nocomma(pos[0], pos[1], pos[2]);
				pos[2]++;
			}
			pos[2] = pos[1] + 2;
			pos[1]++;
		}
		pos[2] = pos[0] + 3;
		pos[1] = pos[0] + 2;
		pos[0]++;
	}
}
