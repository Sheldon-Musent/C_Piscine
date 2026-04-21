// === ex04 ft_str_is_lowercase ===
#include <unistd.h>

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

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	ft_putnbr(ft_str_is_lowercase("hello"));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_lowercase("Hello"));
	ft_putchar('\n');
	return (0);
}
