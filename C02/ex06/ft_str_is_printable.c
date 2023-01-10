/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:56:52 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/22 16:56:55 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
int	ft_str_is_printable(char *s)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (s[i] != '\0')
	{
		if ((s[i] >= 32) && (s[i] <= 127))
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
// 	char	string2[] = "\t";
// 	char	*str;
// 	char	*str2;
//
// 	str = string;
// 	str2 = string2;
// 	printf("1 - \"%s\", so return %d\n", string, ft_str_is_printable(string));
// 	printf("2 - \"%s\", so return %d\n", string2, ft_str_is_printable(string2));
// 	return (0);
// }
//