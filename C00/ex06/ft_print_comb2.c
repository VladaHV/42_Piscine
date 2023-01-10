/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 20:14:02 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/18 22:04:23 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a, char b)
{
	write(1, &a, 1);
	write(1, &b, 1);
}

void	ft_number(int nmb, int end)
{
	char	a;
	char	b;

	if (nmb <= 9)
	{
		a = nmb + 48;
		ft_putchar('0', a);
	}
	else if (nmb <= end)
	{
		a = (nmb % 10) + 48;
		b = (nmb / 10) + 48;
		ft_putchar(b, a);
	}
}

void	ft_show(int one, int two)
{
	ft_number(one, 98);
	write(1, " ", 1);
	ft_number(two, 99);
	if (one != 98 || two != 99)
		ft_putchar(',', ' ');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_show(a, b);
			b++;
		}
		a++;
	}
}
