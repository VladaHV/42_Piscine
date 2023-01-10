/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:39:43 by vhonchar          #+#    #+#             */
/*   Updated: 2022/10/02 19:44:18 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	len;
	int	i;

	range = NULL;
	if (max > min)
	{
		len = max - min + 1;
		range = malloc(sizeof(*range) * (len * 4));
		i = 0;
		while (min < max)
		{
			range[i] = min;
			min++;
			i++;
		}
		return (range);
	}
	else
		return (range);
}

// int main()
// {
// 	int *arr;
// 	int min;
// 	int max;
// 	int len;
//
// 	min = 10;
// 	max = 20;
// 	len = max - min +1;
// 	arr = ft_range(min, max);
// 	// printf("%d\n", (arr == NULL)); 
// 	//we cant print, but we can check if
// 	int i = 0;
// 	while (i < len)
// 	{
// 		printf("arr[%d]=%d\n", i ,arr[i]);
// 		i++;
// 	}
// }