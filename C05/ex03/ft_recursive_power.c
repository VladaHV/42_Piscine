/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:10:39 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/29 15:10:39 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_recursive_power(int nb, int power)
{
	int	power_result;

	power_result = 1;
	if (power > 0)
		power_result *= nb * ft_recursive_power(nb, (power - 1));
	if (power < 0)
		power_result = 0;
	return (power_result);
}

// int main()
// {
// 	printf("Res %d\n", ft_recursive_power(5, 2));
// }