/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 00:58:00 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/25 00:58:00 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
//
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (*(src + j) != '\0')
	{	
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(dest + i) = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	dest[50] = "Hello. ";
// 	char	dest1[50] = "Hello. ";
// 	char	*src;
//
// 	src = "My name is Vlada";
// 	printf("Dest is \"%s\", src is \"%s\"\n", dest, src);
// 	ft_strcat(dest, src);
// 	printf("Result is - \"%s\"\n", dest);
// 	printf("Result of function - \"%s\"\n", strcat(dest1, src));
// 	return (0);
// }
//