/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 22:35:34 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/22 02:19:41 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
//
void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// int	main(void)
// {
// 	int x;
// 	int y;
// 	int *a;
// 	int *b;

// 	x = 5;
// 	y = 8;
// 	a = &x;
// 	b = &y;
// 	printf("x is %d\n", x);
// 	printf("y is %d\n", y);
// 	ft_swap(a,b);
// 	printf("x is %d\n", x);
// 	printf("y is %d\n", y);
// 	return (0);
// }