#include <unistd.h>
#include "ft_point.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar('0' + nb % 10);
}

int	main(void)
{
	t_point	p;

	p.x = 42;
	p.y = 21;
	ft_putnbr(p.x);
	ft_putchar(' ');
	ft_putnbr(p.y);
	write(1, "\n", 1);
	return (0);
}
