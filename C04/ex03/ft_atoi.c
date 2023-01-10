/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 11:31:08 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/27 11:31:08 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
void	ft_check(char *c, int *output, int *range)
{
	int	i;

	i = 0;
	while (c[i] == ' ' || c[i] == '\f' || c[i] == '\n'
		|| c[i] == '\r' || c[i] == '\t' || c[i] == '\v')
			i++;
	while (c[i] == '-' || c[i] == '+')
	{
		if (c[i] == '-')
			*range = ((*range) * -1);
		i++;
	}
	while (c[i] >= '0' && c[i] <= '9')
	{
		*output = (10 * (*output) + (c[i] - '0'));
		i++;
	}
}

int	ft_atoi(char *str)
{
	int		range;
	int		output;

	range = 1;
	output = 0;
	ft_check(str, &output, &range);
	if (range == -1)
		return (output *= -1);
	else
		return (output);
}

// int	main(void)
// {
// 	printf("%d\n", ft_atoi(" ---+--+1234ab567"));
// 	return (0);
// }
//