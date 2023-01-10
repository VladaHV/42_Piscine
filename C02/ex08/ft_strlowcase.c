/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 16:44:16 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/22 17:14:09 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
char	*ft_strlowcase(char *s)
{
	int	i;

	i = 0;
	if (s[i] != '\0')
	{
		while (s[i] != '\0')
		{
			if ((s[i] >= 65) && (s[i] <= 90))
			{
				s[i] += 32;
			}
		i++;
		}
	}
	return (s);
}

// int	main(void)
// {
// 	char	string[] = "dscGDWRlfk 909efklm ";
// 	char	string2[] = "UPPERCASE";
// 	char	string3[] = "NotuPpercase";
// 	char	*str;
// 	char	*str2;
// 	char	*str3;
//
// 	str = string;
// 	str2 = string2;
// 	str3 = string3;
// 	printf("Was - \"%s\", ", string);
// 	printf("now - \"%s\"\n", ft_strlowcase(string));
// 	printf("Was - \"%s\", ", string2);
// 	printf("now - \"%s\"\n", ft_strlowcase(string2));
// 	printf("Was - \"%s\", ", string3);
// 	printf("now - \"%s\"\n", ft_strlowcase(string3));
// 	return (0);
// }
//