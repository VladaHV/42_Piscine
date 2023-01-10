/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:22:52 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/25 17:41:57 by rbelyy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_msg_error(void);
int		ft_atoi(char *str);
int		ft_strlen(char *str);
int		*get_numbers(char *str);
int		check(int ac, char **av);
int		double_check(int dest[4][4], int pos, int num);
int		ft_case(int dest[4][4], int pos, int src[16]);

int	solve(int dest[4][4], int src[16], int pos) //start pos = 0, 1
{
	int	size;

	if (pos == 16)
		return (1);
	size = 0;
	while (++size <= 4)		//start from 1
	{
		if (double_check(dest, pos, size) == 0)
		{
			dest[pos / 4][pos % 4] = size;
			if (ft_case(dest, pos, src) == 0)
			{
				if (solve(dest, src, pos + 1) == 1) //pos = 1
					return (1);
			}
			else
				dest[pos / 4][pos % 4] = 0;
		}
	}
	return (0);
}

void	display_solution(int dest[4][4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			ft_putnbr(dest[i][j]);
			if (j != 3)
				ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}

int	main(int ac, char **av)
{
	int	dest[4][4];
	int	*src;
	int	i_col;
	int	i_row;

	i_col = 0;
	i_row = 0;
	while (i_row < 4)
	{
		while (i_col < 4)
		{
			dest[i_row][i_col] = 0;
			i_col++;
		}
		i_row++;
		i_col = 0;
	}
	if (check(ac, av) == 1)
		return (0);
	src = get_numbers(av[1]);
	if (solve(dest, src, 0) == 1) 
		display_solution(dest);
	else
		ft_msg_error();
	return (0);
}
