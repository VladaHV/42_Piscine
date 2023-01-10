/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooke <ooke@student.42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 13:09:45 by ooke              #+#    #+#             */
/*   Updated: 2022/09/18 13:09:52 by ooke             ###   ########.fr       */
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
				ft_draw(x, 'A', 'B', 'C');
			else if (line == y)
				ft_draw(x, 'C', 'B', 'A');
			else
				ft_draw(x, 'B', ' ', 'B');
			line++;
		}
	}
}
