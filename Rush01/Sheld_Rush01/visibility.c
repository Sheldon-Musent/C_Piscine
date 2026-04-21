int	count_visible(int *row, int size)
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	while (i < size)
	{
		if (row[i] > max)
		{
			count++;
			max = row[i];
		}
		i++;
	}
	return (count);
}

int	count_visible_reverse(int *row, int size)
{
	int	i;
	int	max;
	int	count;

	i = size - 1;
	max = 0;
	count = 0;
	while (i >= 0)
	{
		if (row[i] > max)
		{
			count++;
			max = row[i];
		}
		i--;
	}
	return (count);
}
