/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:36:09 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/22 16:36:11 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//
int	ft_str_is_lowercase(char *s)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (s[i] != '\0')
	{
		if ((s[i] >= 97) && (s[i] <= 122))
		{
			result *= result;
		}
		else
		{
			result = result * 0;
		}
		i++;
	}
	return (result);
}

int	main(void)
{
	char	string[] = "";
	char	string2[] = "lowecase";
	char	string3[] = "NotLowercase";

	printf("1 - \"%s\", return %d\n", string, ft_str_is_lowercase(string));
	printf("2 - \"%s\", return %d\n", string2, ft_str_is_lowercase(string2));
	printf("3 - \"%s\", return %d\n", string3, ft_str_is_lowercase(string3));
	return (0);
}
