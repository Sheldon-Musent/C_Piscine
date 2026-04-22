#include <unistd.h>
#include <stdlib.h>
#include "ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab(int ac, char **av);

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putnbr(int nb)
{
	char	c;

	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = '0' + nb % 10;
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	t_stock_str	*tab;
	int			i;

	tab = ft_strs_to_tab(argc, argv);
	i = 0;
	while (i < argc)
	{
		ft_putnbr(tab[i].size);
		write(1, " ", 1);
		ft_putstr(tab[i].str);
		write(1, " ", 1);
		ft_putstr(tab[i].copy);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
