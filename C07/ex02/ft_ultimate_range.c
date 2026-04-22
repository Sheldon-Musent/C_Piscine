#include <unistd.h>
#include <stdlib.h>

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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < size)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (size);
}

int	main(void)
{
	int	*arr;
	int	size;
	int	i;

	size = ft_ultimate_range(&arr, 1, 5);
	ft_putnbr(size);
	write(1, "\n", 1);
	i = 0;
	while (i < size)
	{
		ft_putnbr(arr[i]);
		ft_putchar(' ');
		i++;
	}
	write(1, "\n", 1);
	free(arr);
	return (0);
}
