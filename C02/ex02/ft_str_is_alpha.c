/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 14:00:28 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/25 00:43:18 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_str_is_alpha(char *s)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (s[i] != '\0')
	{
		if (((s[i] >= 65) && (s[i] <= 90)) || ((s[i] >= 97) && (s[i] <= 122)))
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
// 	char	string2[] = "Not just a characters";
// 	char	string3[] = "JustACharacters";
// 	char	*str;
// 	char	*str2;
// 	char	*str3;
//
// 	str = string;
// 	str2 = string2;
// 	str3 = string3;
// 	printf("1 - \"%s\" and return %d\n", string, ft_str_is_alpha(string));
// 	printf("2 - \"%s\" and return %d\n", string2, ft_str_is_alpha(string2));
// 	printf("3 - \"%s\" and return %d\n", string3, ft_str_is_alpha(string3));
// 	return (0);
// }
//