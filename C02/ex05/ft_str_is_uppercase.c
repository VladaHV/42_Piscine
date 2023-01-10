/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:40:54 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/22 16:40:56 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_str_is_uppercase(char *s)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (s[i] != '\0')
	{
		if ((s[i] >= 65) && (s[i] <= 90))
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

// int	main(void)
// {
// 	char	string[] = "";
// 	char	string2[] = "UPPERCASE";
// 	char	string3[] = "NotuPpercase";
// 	char	*str;
// 	char	*str2;
// 	char	*str3;
//
// 	str = string;
// 	str2 = string2;
// 	str3 = string3;
// 	printf("1 - \"%s\", return %d\n", string, ft_str_is_uppercase(string));
// 	printf("2 - \"%s\", return %d\n", string2, ft_str_is_uppercase(string2));
// 	printf("3 - \"%s\", return %d\n", string3, ft_str_is_uppercase(string3));
// 	return (0);
// }
//