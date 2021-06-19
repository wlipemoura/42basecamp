#include    <unistd.h>

int	ft_conditions(int nb)
{
	if (nb < 0 && nb != -2147483648)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	return (nb);
}

void	ft_putnbr(int nb)
{
	char	modules[10];
	int		i;
	int		j;

	i = 0;
	nb = ft_conditions(nb);
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	if (nb == 0)
		write(1, "0", 1);
	while (nb > 0)
	{
		modules[i] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		write(1, &modules[j], 1);
		j--;
	}
}
