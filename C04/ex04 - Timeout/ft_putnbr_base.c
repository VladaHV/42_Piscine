/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 20:55:37 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/29 11:26:38 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check(char *base, int x)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		j = i;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				x++;
			j++;
		}
		if ((base[i] == 61) || (base[i] == 37) || (base[i] < 33)
			|| (base[i] > 126) || ((base[i] >= 42) && (base[i] <= 47)))
				x++;
		else
			i++;
	}
	return (x);
}

int	ft_check_base(char *base, int len)
{
	int		i;
	int		x;

	i = 0;
	x = 0;
	if (len > 1)
	{
		x = ft_check(base, x);
		if (x > len)
			return (0);
		else
			return (1);
	}
	else
		return (0);
}

void	ft_convert(char *buf, char *base, long int *nbr, int *i)
{
	int	len;

	len = 0;
	len = ft_strlen(base);
	if (len == 16)
	{
		while (*nbr)
		{
			buf[(*i)++] = base[(*nbr % len)];
			*nbr /= len;
		}
	}
	else
	{
		while (*nbr)
		{
			buf[(*i)++] = *nbr % len + '0';
			*nbr /= len;
		}
	}
	buf[*i] = '\0';
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			i;
	int			len;
	char		buf[100];
	long int	nb;

	i = 0;
	len = 0;
	nb = nbr;
	len = ft_strlen(base);
	if (ft_check_base(base, len) == 1)
	{
		if (nb < 0)
		{
			nb *= -1;
			write(1, "-", 1);
		}
		ft_convert(buf, base, &nb, &i);
		while (i--)
			write(1, &buf[i], 1);
	}
}

// int	main(void)
// {
// 	int		number = 42;
// 	char	*base = "0123456789ABCDEF";
//
// 	ft_putnbr_base(number, base);
// 	write(1, "\n", 1);
// 	ft_putnbr_base(number, "01");
// 	write(1, "\n", 1);
// 	ft_putnbr_base(number, "poneyvif");
// 	write(1, "\n", 1);
// 	number = -2147483648;
// 	ft_putnbr_base(number, "01");
// 	write(1, "\n", 1);
// 	return (0);
// }
//