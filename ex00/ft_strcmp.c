/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chinchen <chinchen@student.42kl.edu.m      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 11:51:55 by chinchen          #+#    #+#             */
/*   Updated: 2026/04/23 16:17:05 by chinchen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*
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
*/
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	ft_putnbr(ft_strcmp("hello", "hello"));
	ft_putchar('\n');
	write(1, "Should be 0", 11);
	ft_putchar('\n');
	ft_putnbr(ft_strcmp("hello", "help"));
	ft_putchar('\n');
	write(1, "Should be -4", 12);
	ft_putchar('\n');
	ft_putnbr(ft_strcmp("hello", "hell"));
	ft_putchar('\n');
	write(1, "Should be -111", 14);
	return (0);
}
*/
