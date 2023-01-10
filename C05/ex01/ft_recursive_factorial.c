/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:48:47 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/29 14:48:49 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_recursive_factorial(int nb)
{
	int	rec_factorial;

	rec_factorial = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
		rec_factorial *= nb * ft_recursive_factorial(nb - 1);
	return (rec_factorial);
}

// int	main(void)
// {
// 	int	i;
//
// 	i = ft_recursive_factorial(5);
// 	printf("Res = %d\n", i);
// 	return (0);
// }
//