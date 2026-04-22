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

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	ft_putnbr(ft_is_prime(7));
	write(1, "\n", 1);
	ft_putnbr(ft_is_prime(10));
	write(1, "\n", 1);
	ft_putnbr(ft_is_prime(1));
	write(1, "\n", 1);
	ft_putnbr(ft_is_prime(2));
	write(1, "\n", 1);
	return (0);
}
