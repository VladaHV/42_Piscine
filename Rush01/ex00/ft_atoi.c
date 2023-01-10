/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:28:24 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/25 19:05:32 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	val;
	int	minus;

	i = 0;
	val = 0;
	minus = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			minus++;
	while (str[i] >= '0' && str[i] <= '9')
		val = val * 10 + (str[i++] - '0');
	if (minus % 2 == 1)
		return (val * -1);
	return (val);
}
