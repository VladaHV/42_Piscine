/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 12:00:44 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/17 12:00:47 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_draw(int len, char start, char middl, char end)
{
	int	i;

	i = 1;
	while (i <= len)
	{
		if (i == 1)
			ft_putchar(start);
		else if (i == len)
			ft_putchar(end);
		else
			ft_putchar(middl);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	line;

	line = 1;
	if (x >= 1 && y >= 1)
	{
		while (line <= y)
		{
			if (line == 1)
				ft_draw(x, 'A', 'B', 'A');
			else if (line == y)
				ft_draw(x, 'C', 'B', 'C');
			else
				ft_draw(x, 'B', ' ', 'B');
			line++;
		}
	}
}
