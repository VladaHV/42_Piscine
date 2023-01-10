/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:43:34 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/29 17:43:37 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb)
{
	int	check;
	int	start;

	check = 0;
	start = nb;
	if (nb < 2)
		return (2);
	while (check != 1 && nb <= 2147483647)
	{
		start = nb;
		check = 0;
		while (start >= 2 && check <= 2)
		{
			if (!(nb % start))
				check++;
			start--;
		}
		nb++;
		if (nb == 2147483647)
			return (nb);
	}
	return (nb - 1);
}

int	main(void)
{
	int	i;

	i = -1;
	while (i < 50)
	{
		printf("Number is %d, next prime is %d\n", i, ft_find_next_prime(i));
		i++;
	}
	printf("Prime is %d\n", ft_find_next_prime(2147483647));
}
