/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_check.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbelyy <rbelyy@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:22:24 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/25 17:41:44 by rbelyy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	double_check(int dest[4][4], int pos, int num) //size = 1 start pos = 0 
{
	int	i;

	i = -1;
	while (++i < pos / 4)
		if (dest[i][pos % 4] == num)
			return (1);
	i = -1;
	while (++i < pos % 4)
		if (dest[pos / 4][i] == num)
			return (1);
	return (0);
}
