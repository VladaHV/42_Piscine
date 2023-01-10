/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 09:12:07 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/26 09:12:07 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		res;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			i = 0;
			res = 1;
			while (to_find[i] != '\0')
			{
				if (str[i] != to_find[i])
					res = 0;
				i++;
			}
			if (res == 1)
				return (str);
		}
		str++;
	}
	return (0);
}

// int	main(void)
// {
// 	char			dest[50] = "Hello. How are you?";
// 	char			*src;
//
// 	src = "How";
// 	printf("Dest is \"%s\"\n", dest);
// 	printf("Search for \"%s\"\n", src);
// 	printf("Result is - \"%s\"\n", ft_strstr(dest, src));
// 	printf("Result from function - \"%s\"\n", strstr(dest, src));
// 	return (0);
// }
//
