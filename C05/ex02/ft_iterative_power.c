/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:01:38 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/29 15:01:40 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_iterative_power(int nb, int power)
{
	int	power_result;

	power_result = 1;
	while (power > 0)
	{
		power_result *= nb;
		power--;
	}
	if (power < 0)
		power_result = 0;
	return (power_result);
}

// int main()
// {
// 	printf("Res %d\n", ft_iterative_power(5, 2));
// }