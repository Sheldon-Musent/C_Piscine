int	check_grid(int grid[4][4], int *clues);

int	is_valid_so_far(int grid[4][4], int row, int col, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (grid[row][i] == num)
			return (0);
		if (grid[i][col] == num)
			return (0);
		i++;
	}
	return (1);
}

int	solve(int grid[4][4], int *clues, int pos)
{
	int	row;
	int	col;
	int	num;

	if (pos == 16)
		return (check_grid(grid, clues));
	row = pos / 4;
	col = pos % 4;
	num = 1;
	while (num <= 4)
	{
		if (is_valid_so_far(grid, row, col, num))
		{
			grid[row][col] = num;
			if (solve(grid, clues, pos + 1))
				return (1);
			grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}
