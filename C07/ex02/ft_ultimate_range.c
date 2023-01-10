/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 00:05:19 by vhonchar          #+#    #+#             */
/*   Updated: 2022/10/02 19:46:35 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	*range = (int *)malloc((max - min) * 4);
	if (!(*range))
		return (-1);
	while (max > min)
	{
		*((*range) + i) = min;
		min++;
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	int	*arr;
// 	int	min;
// 	int	max;
// 	int	len;
// 	int	i;
//
// 	min = 5;
// 	max = 9;
// 	len = ft_ultimate_range(&arr, min, max);
// 	i = 0;
// 	printf("%d\n", len);
// 	while (i < len)
// 	{
// 		printf("arr[%d]=%d\n", i, arr[i]);
// 		i++;
// 	}
// }
//