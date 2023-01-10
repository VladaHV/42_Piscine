/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 01:25:05 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/22 01:25:05 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
//
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	buf;

	i = 0;
	j = 0;
	while (i < (size - 1))
	{
		j = 0;
		while (j < (size - i - 1))
		{
			if (tab[j] > tab[j + 1])
			{
				buf = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = buf;
			}
			j++;
		}
		i++;
	}
}

// int	ft_printarr(int *tab, int size)
// {
// 	int	i = 0;
//
// 	while (i < size)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	return (0);
// }
//
// int	main(void)
// {
// 	int	arr[] = {10, 11, 2, 3, 5, 8, 20};
// 	int	*tab = arr;
// 	int	size = 7;
//
// 	printf("Array was: ");
// 	ft_printarr(tab, size);
// 	ft_sort_int_tab(tab, size);
// 	printf("Array now: ");
// 	ft_printarr(tab, size);
// 	return (0);
// }
//