/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_case.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:29:15 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/25 19:05:27 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	col_up(int dest[4][4], int pos, int src[16]);
int	row_right(int dest[4][4], int pos, int src[16]);
int	col_down(int dest[4][4], int pos, int src[16]);
int	row_left(int dest[4][4], int pos, int src[16]);

int	ft_case(int dest[4][4], int pos, int src[16])
{
	if (row_left(dest, pos, src) == 1)
		return (1);
	if (row_right(dest, pos, src) == 1)
		return (1);
	if (col_down(dest, pos, src) == 1)
		return (1);
	if (col_up(dest, pos, src) == 1)
		return (1);
	return (0);
}
