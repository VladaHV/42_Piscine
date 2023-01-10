/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 09:44:45 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/25 00:43:39 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[] = "Hello and good luck";
// 	char	src[] = "Something return";
// 	char	dest1[] = "Just check";
// 	char	src1[] = "How is it?";
//
// 	printf("%s\n", ft_strncpy(dest, src, 7));
// 	printf("%s\n", ft_strncpy(dest1, src1, 2));
// 	return (0);
// }
//