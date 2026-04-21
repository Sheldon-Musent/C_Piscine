#include <unistd.h>
#include "rush01.h"

void	ft_putstr_error(void)
{
	write(1, "Error\n", 6);
}

int	parse_input(char *str, int *clues)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
		{
			i++;
			continue ;
		}
		if (str[i] < '1' || str[i] > '4')
			return (0);
		if (str[i + 1] != ' ' && str[i + 1] != '\0')
			return (0);
		clues[count] = str[i] - '0';
		count++;
		i++;
	}
	if (count != 16)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	int	clues[16];
	int	grid[4][4];
	int	i;
	int	j;

	if (argc != 2)
	{
		ft_putstr_error();
		return (1);
	}
	if (!parse_input(argv[1], clues))
	{
		ft_putstr_error();
		return (1);
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	if (!solve(grid, clues, 0))
	{
		ft_putstr_error();
		return (1);
	}
	print_grid(grid);
	return (0);
}
