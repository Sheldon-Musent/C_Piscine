// === ex06 ft_str_is_printable ===
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

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	ft_putnbr(ft_str_is_printable("Hello World"));
	ft_putchar('\n');
	ft_putnbr(ft_str_is_printable("Hello\n"));
	ft_putchar('\n');
	return (0);
}
