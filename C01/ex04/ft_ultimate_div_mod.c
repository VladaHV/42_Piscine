/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 00:04:17 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/22 00:04:19 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
//
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = (*a) / (*b);
		mod = (*a) % (*b);
		*a = div;
		*b = mod;
	}
}

// int	main(void)
// {
// 	int x = 5;
// 	int y = 2;
// 	int *a = &x;
// 	int *b = &y;
//
// 	ft_ultimate_div_mod(a,b);
// 	printf("X is %d\n", x);
// 	printf("Y is %d\n", y);
//
// }