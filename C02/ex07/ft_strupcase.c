/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:06:36 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/22 17:06:38 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
char	*ft_strupcase(char *s)
{
	int	i;

	i = 0;
	if (s[i] != '\0')
	{
		while (s[i] != '\0')
		{
			if ((s[i] >= 97) && (s[i] <= 122))
			{
				s[i] -= 32;
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
// 	printf("now - \"%s\"\n", ft_strupcase(string));
// 	printf("Was - \"%s\", ", string2);
// 	printf("now - \"%s\"\n", ft_strupcase(string2));
// 	printf("Was - \"%s\", ", string3);
// 	printf("now - \"%s\"\n", ft_strupcase(string3));
// 	return (0);
// }
//