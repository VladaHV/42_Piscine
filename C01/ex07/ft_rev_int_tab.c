/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 00:40:45 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/22 00:40:45 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
//
int	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	n;

	i = 0;
	n = size - 1;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[n];
		tab[n] = temp;
		i++;
		n--;
	}
	return (0);
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
// 	int	arr[] = {0, 5, 2, 3};
// 	int	*tab = arr;
//
// 	printf("Array was: ");
// 	ft_printarr(tab, 4);
// 	ft_rev_int_tab(tab, 4);
// 	printf("Array now: ");
// 	ft_printarr(tab, 4);
// 	return (0);
// }
//