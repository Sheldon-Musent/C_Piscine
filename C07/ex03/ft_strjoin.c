#include <unistd.h>
#include <stdlib.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		total;
	int		i;

	if (size <= 0)
	{
		result = malloc(sizeof(char));
		if (result == NULL)
			return (NULL);
		result[0] = '\0';
		return (result);
	}
	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += ft_strlen(sep) * (size - 1);
	result = malloc(sizeof(char) * (total + 1));
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
		i++;
	}
	return (result);
}

int	main(void)
{
	char	*tab[] = {"Hello", "World", "Sheldon"};
	char	*result;

	result = ft_strjoin(3, tab, " - ");
	ft_putstr(result);
	write(1, "\n", 1);
	free(result);
	return (0);
}
