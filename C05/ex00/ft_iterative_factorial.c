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

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb > 12)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

int	main(void)
{
	ft_putnbr(ft_iterative_factorial(5));
	write(1, "\n", 1);
	ft_putnbr(ft_iterative_factorial(0));
	write(1, "\n", 1);
	ft_putnbr(ft_iterative_factorial(-3));
	write(1, "\n", 1);
	return (0);
}
