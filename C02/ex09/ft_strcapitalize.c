/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:15:32 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/22 21:26:13 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
char	*ft_strlowcase_plus(char *s)
{
	int	i;

	i = 0;
	if ((s[i] >= 97) && (s[i] <= 122))
	{
		s[i] -= 32;
	}
	i = 1;
	while (s[i] != '\0')
	{
		if ((s[i] >= 65) && (s[i] <= 90))
		{
			s[i] += 32;
		}
	i++;
	}
	return (s);
}

char	*ft_strcapitalize(char *s)
{
	int	i;

	i = 0;
	if (s[i] != '\0')
	{
		s = ft_strlowcase_plus(s);
		i = 1;
		while (s[i] != '\0')
		{
			if ((s[i] >= 97) && (s[i] <= 122))
			{
				if ((s[i -1] > 122) || (s[i -1] < 48)
					|| ((s[i -1] > 57) && (s[i -1] < 65))
					|| ((s[i -1] > 90) && (s[i -1] < 97)))
				{
					s[i] -= 32;
				}
			}
		i++;
		}
	}
	return (s);
}

// int	main(void)
// {
// 	char	st[] = "salut, comment tu vas ?
// 42mots quarante-deux; cinquante+et+un";
// 	char	st3[] = "dscGDWRlfk 909efklm ";
// 	char	*str;
// 	char	*str3;
//
// 	str = st;
// 	str3 = st3;
// 	printf("Was - \"%s\", ", st);
// 	printf("now - \"%s\"\n", ft_strcapitalize(st));
// 	printf("Was - \"%s\", ", st3);
// 	printf("now - \"%s\"\n", ft_strcapitalize(st3));
// 	return (0);
// }
//