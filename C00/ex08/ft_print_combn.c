/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 22:32:20 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/18 22:32:20 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_write(int arr[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
}

int	ft_index(int arr[], int n)
{
	int	i;
	int	max;

	i = 0;
	max = 10 - n;
	while (i < n)
	{
		if (arr[i] == max)
			return (i - 1);
		if (i == (n - 1) && arr[i] < max)
			return (i);
		max++;
		i++;
	}
	return (-1);
}

void	ft_inc(int arr[], int n, int index)
{
	int	i;

	i = index + 1;
	arr[index]++;
	while (i <= n)
	{
		arr[i] = arr[i - 1] + 1;
		i++;
	}
}

void	ft_print_combn(int n)
{
	int	combin[10];
	int	c;
	int	index;

	if (n >= 10 || n <= 0)
		return ;
	else
	{
		c = 0;
		while (c < n)
		{
			combin[c] = c;
			c++;
		}
		while (ft_index(combin, n) != -1)
		{
			index = ft_index(combin, n);
			ft_write(combin, n);
			ft_inc(combin, n, index);
			write(1, ", ", 2);
		}
		ft_write(combin, n);
	}
}
