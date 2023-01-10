/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:10:49 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/29 17:10:51 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_is_prime(int nb)
{
	int	check;
	int	start;

	check = 0;
	start = nb;
	while (start >= 2)
	{
		if (!(nb % start))
			check++;
		start--;
	}
	if (check == 1)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	int	i;
//
// 	i = 0;
// 	while (i <= 25)
// 	{
// 		printf("Num is %d prime?\t%d\n", i, ft_is_prime(i));
// 		i++;
// 	}
// }
//