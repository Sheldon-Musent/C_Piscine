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

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int	main(void)
{
	ft_putnbr(ft_fibonacci(0));
	write(1, "\n", 1);
	ft_putnbr(ft_fibonacci(1));
	write(1, "\n", 1);
	ft_putnbr(ft_fibonacci(10));
	write(1, "\n", 1);
	ft_putnbr(ft_fibonacci(-5));
	write(1, "\n", 1);
	return (0);
}
