#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar('0' + nb % 10);
}

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i <= 46340)
	{
		if (i * i == nb)
			return (i);
		if (i * i > nb)
			return (0);
		i++;
	}
	return (0);
}

int	main(void)
{
	ft_putnbr(ft_sqrt(9));
	write(1, "\n", 1);
	ft_putnbr(ft_sqrt(144));
	write(1, "\n", 1);
	ft_putnbr(ft_sqrt(10));
	write(1, "\n", 1);
	ft_putnbr(ft_sqrt(-5));
	write(1, "\n", 1);
	return (0);
}
