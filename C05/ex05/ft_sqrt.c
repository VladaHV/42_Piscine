/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:00:55 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/29 16:00:57 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
//
int	ft_sqrt(int nb)
{
	long	x;

	x = 2;
	if (nb < 0)
		return (0);
	if (nb == 1)
		return (1);
	while ((x * x) <= nb)
	{
		if (x * x == nb)
			return (x);
		x++;
	}
	return (0);
}

// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(25));
// 	printf("%d\n", ft_sqrt(0));
// 	printf("%d\n", ft_sqrt(225));
// 	printf("%d\n", ft_sqrt(-10));
// 	printf("%d\n", ft_sqrt(64));
// }
//