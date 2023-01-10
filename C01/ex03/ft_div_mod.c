/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:55:44 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/21 22:55:46 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
//
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// int		main(void)
// {
// 	int a  = 5;
// 	int b  = 2;
// 	int *div = &a;
// 	int *mod = &b;
//
// 	ft_div_mod(a, b, div, mod);	
// 	printf("Value of a is : %d",a;
// 	printf("\nValue of b is : %d",b);
// }