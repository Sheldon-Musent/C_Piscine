#ifndef RUSH01_H
# define RUSH01_H

void	ft_putstr_error(void);
int	parse_input(char *str, int *clues);
int	count_visible(int *row, int size);
int	count_visible_reverse(int *row, int size);
int	check_grid(int grid[4][4], int *clues);
int	solve(int grid[4][4], int *clues, int pos);
void	ft_putchar(char c);
void	print_grid(int grid[4][4]);

#endif
