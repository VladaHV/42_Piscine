/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:21:41 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/22 17:04:18 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_str_is_numeric(char *s)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (s[i] != '\0')
	{
		if ((s[i] >= 48) && (s[i] <= 57))
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

// int	main()
// {
// 	char	string[] = "";
// 	char	string2[] = "0Not9 3just5 a digits3";
// 	char	string3[] = "8473397037434743758";
// 	char	*str;
// 	char	*str2;
// 	char	*str3;
//
// 	str = string;
// 	str2 = string2;
// 	str3 = string3;
// 	printf("1 - \"%s\", so return %d\n", string, ft_str_is_numeric(string));
// 	printf("2 - \"%s\", so return %d\n", string2, ft_str_is_numeric(string2));
// 	printf("3 - \"%s\", so return %d\n", string3, ft_str_is_numeric(string3));
// 	return (0);
// }
//