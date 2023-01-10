/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_strlcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:42:05 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/26 12:42:05 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int		index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	len1;
	unsigned int	len2;
	unsigned int	i;

	x = 0;
	len1 = ft_strlen(dest);
	len2 = ft_strlen(src);
	i = ft_strlen(dest);
	if (size < 1 || size <= len1)
		return (size + len2);
	while (i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[x];
		x++;
		i++;
	}
	dest[i] = '\0';
	if (size < len1)
		return (len2 + size);
	else
		return (len1 + len2);
}

// int	main(void)
// {
// 	char			dest[128] = "text-text-text-....";
// 	char			src[] = "next-next-....";
// 	unsigned int	n;
//
// 	n = ft_strlen(dest);
// 	printf("Dest: %s (size: %d), src: %s (size: %d)\n",
// 	 dest, ft_strlen(dest), src, ft_strlen(src));
// 	printf("Function return %d\n", ft_strlcat(dest, src, sizeof(dest)));
// 	n = ft_strlen(dest);
// 	printf("Dest now is: %s, size dest: %d\n", dest, n);
// 	return (0);
// }
//