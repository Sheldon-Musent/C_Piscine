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

int	is_prime(int nb)
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

int	ft_find_next_prime(int nb)
{
	while (!is_prime(nb))
		nb++;
	return (nb);
}

int	main(void)
{
	ft_putnbr(ft_find_next_prime(0));
	write(1, "\n", 1);
	ft_putnbr(ft_find_next_prime(10));
	write(1, "\n", 1);
	ft_putnbr(ft_find_next_prime(13));
	write(1, "\n", 1);
	ft_putnbr(ft_find_next_prime(100));
	write(1, "\n", 1);
	return (0);
}
