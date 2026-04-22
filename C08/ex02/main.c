#include <unistd.h>
#include "ft_abs.h"

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

int	main(void)
{
	ft_putnbr(ABS(-42));
	ft_putchar('\n');
	ft_putnbr(ABS(42));
	ft_putchar('\n');
	ft_putnbr(ABS(0));
	ft_putchar('\n');
	return (0);
}
