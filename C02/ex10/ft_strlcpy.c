/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 23:43:09 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/22 23:43:09 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
//
int	ft_strlen(char *str)
{
	int		index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	len = ft_strlen(src);
	if (size < 1)
		return (len);
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

// int	main(void)
// {
// 	char	dest[] = "Hello World";
// 	char	src[] = "Something return";
// 	char	dest1[] = "Try";
// 	char	src1[] = "How are you?";
// 	unsigned int n;
// 	unsigned int m;
//
// 	n = sizeof(dest);
// 	m = sizeof(dest1);
// 	printf("Was 1\n\tsrc: %s\n\tdes: %s\n\tsize dest: %d\n", src, dest, n);
// 	n = ft_strlcpy(dest, src, n);
// 	printf("Now 1\n\tsrc: %s\n\tdes: %s\n\tsize src: %d\n", src, dest, n);
// 	printf("Was 2\n\tsrc: %s\n\tdes: %s\n\tsize dest1: %d\n", src1, dest1, m);
// 	m = ft_strlcpy(dest1, src1, m);
// 	printf("Now 2\n\tsrc: %s\n\tdes: %s\n\tsize src2: %d\n", src1, dest1, m);
// 	return (0);
// }
//