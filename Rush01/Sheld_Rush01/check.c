int	count_visible(int *row, int size);
int	count_visible_reverse(int *row, int size);

int	check_rows(int grid[4][4], int *clues)
{
	int	row[4];
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			row[j] = grid[i][j];
			j++;
		}
		if (count_visible(row, 4) != clues[i + 8])
			return (0);
		if (count_visible_reverse(row, 4) != clues[i + 12])
			return (0);
		i++;
	}
	return (1);
}

int	check_cols(int grid[4][4], int *clues)
{
	int	col[4];
	int	i;
	int	j;

	j = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			col[i] = grid[i][j];
			i++;
		}
		if (count_visible(col, 4) != clues[j])
			return (0);
		if (count_visible_reverse(col, 4) != clues[j + 4])
			return (0);
		j++;
	}
	return (1);
}

int	check_grid(int grid[4][4], int *clues)
{
	if (!check_rows(grid, clues))
		return (0);
	if (!check_cols(grid, clues))
		return (0);
	return (1);
}
