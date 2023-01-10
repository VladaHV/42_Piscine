/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 23:08:07 by vhonchar          #+#    #+#             */
/*   Updated: 2022/10/01 23:08:07 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	long	i;
	long	len;
	char	*dest;

	len = ft_strlen(src);
	dest = malloc(sizeof(*src) * len);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/* int	main(void)
{
	char	*src1;
	char	*src2;

	src1 = ft_strdup("Hello!!!");
	src2 = strdup("Good bye!");
	printf("return1 = %s\n", src1);
	printf("return2 original = %s\n", src2);
	return (0);
}
*/