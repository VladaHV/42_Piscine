/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checking.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:26:49 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/25 17:41:41 by rbelyy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	col_up(int dest[4][4], int pos, int src[16]) // dest[0][0], pos 0, 
{
	int	i;
	int	max_size;
	int	visible_towers;

	i = 0;
	max_size = 0;
	visible_towers = 0;
	if (pos / 4 == 3)
	{
		while (i < 4)
		{
			if (dest[i][pos % 4] > max_size)
			{
				max_size = dest[i][pos % 4];
				visible_towers++;
			}
			i++;
		}
		if (src[pos % 4] != visible_towers)
			return (1);
	}
	return (0);
}

int	row_right(int dest[4][4], int pos, int src[16])
{
	int	i;
	int	max_size;
	int	visible_towers;

	i = 4;
	max_size = 0;
	visible_towers = 0;
	if (pos % 4 == 3)
	{
		while (--i >= 0)
		{
			if (dest[pos / 4][i] > max_size)
			{
				max_size = dest[pos / 4][i];
				visible_towers++;
			}
		}
		if (src[12 + pos / 4] != visible_towers)
			return (1);
	}
	return (0);
}

int	col_down(int dest[4][4], int pos, int src[16])
{
	int	i;
	int	max_size;
	int	visible_towers;

	i = 3;
	max_size = 0;
	visible_towers = 0;
	if (pos / 4 == 3)
	{
		while (i >= 0)
		{
			if (dest[i][pos % 4] > max_size)
			{
				max_size = dest[i][pos % 4];
				visible_towers++;
			}
			i--;
		}
		if (src[4 + pos % 4] != visible_towers)
			return (1);
	}
	return (0);
}

int	row_left(int dest[4][4], int pos, int src[16])
{
	int	i;
	int	max_size;
	int	visible_towers;

	i = 0;
	max_size = 0;
	visible_towers = 0;
	if (pos % 4 == 3)
	{
		while (i < 4)
		{
			if (dest[pos / 4][i] > max_size)
			{
				max_size = dest[pos / 4][i];
				visible_towers++;
			}
			i++;
		}
		if (src[8 + pos / 4] != visible_towers)
			return (1);
	}
	return (0);
}
