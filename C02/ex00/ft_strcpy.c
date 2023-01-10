/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 07:28:46 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/25 00:43:42 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
//
char	*ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

// int	main(void)
// {
// 	char	dest[] = "Hello";
// 	char	src[] = "Something return";
// 	char	dest1[] = "Just double check";
// 	char	src1[] = "How is it?";
//
// 	printf("%s\n", ft_strcpy(dest, src));
// 	printf("%s\n", ft_strcpy(dest1, src1));
// 	return (0);
// }
//