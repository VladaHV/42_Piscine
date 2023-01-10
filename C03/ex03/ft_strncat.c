/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 01:51:57 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/26 01:51:57 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
//
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	if (nb > 0)
	{
		while ((*(src + j) != '\0') && (j < nb))
		{
			*(dest + i) = *(src + j);
			i++;
			j++;
		}
		*(dest + i) = '\0';
	}
	return (dest);
}

// int	main(void)
// {
// 	char			dest[50] = "Hello. ";
// 	char			dest1[50] = "Hello. ";
// 	char			*src;
// 	char			*res;
// 	unsigned int	n;
//
// 	src = "My name is Vlada";
// 	n = 7;
// 	printf("Dest is \"%s\"", dest);
// 	printf("src is \"%s\"\n", src);
// 	res = ft_strncat(dest, src, n);
// 	printf("Result is - \"%s\"\n", res);
// 	printf("Result of function - \"%s\"\n", strncat(dest1, src, n));
// 	return (0);
// }
//