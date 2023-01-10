/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: coder <coder@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 11:33:20 by coder             #+#    #+#             */
/*   Updated: 2022/09/18 11:33:20 by coder            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

void	ft_draw(int len, char start, char middle, char end)
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
			ft_putchar(middle);
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
				ft_draw(x, '/', '*', '\\');
			else if (line == y)
				ft_draw(x, '\\', '*', '/');
			else
				ft_draw(x, '*', ' ', '*');
			line++;
		}
	}
}
