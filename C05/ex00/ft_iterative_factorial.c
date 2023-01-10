/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:39:43 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/29 12:39:45 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
		factorial *= (nb--);
	return (factorial);
}

// int	main(void)
// {
// 	int	i;
//
// 	i = ft_iterative_factorial(6);
// 	printf("Res = %d\n", i);
// 	return (0);
// }
//