/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 08:30:16 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/27 08:30:16 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_check(int nb)
{
	int		i;
	char	number[10];

	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-');
	}
	while (nb > 0)
	{
		number[i++] = nb % 10 + '0';
		nb /= 10;
	}
	while (i > 0)
		ft_putchar(number[--i]);
}

void	ft_putnbr(int nb)
{
	int		min;
	int		max;

	min = -2147483648;
	max = 2147483647;
	if (nb == min)
		write(1, "-2147483648", 11);
	if (nb == 0)
		write(1, "0", 1);
	if ((nb > min) && (nb <= max))
	{
		ft_check(nb);
	}
}

// int	main(void)
// {
// 	int	nb;
//
// 	nb = -2147483648;
// 	ft_putnbr(nb);
// 	write (1, "\n", 1);
// 	return (0);
// }
//