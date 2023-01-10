/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 07:41:35 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/23 07:41:35 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (*(s1 + i) != '\0' || *(s2 + i) != '\0')
	{
		if (*(s1 + i) == *(s2 + i))
		{
			i++;
		}
		else
		{
			return (*(s1 + i) - *(s2 + i));
		}
	}
	return (0);
}

// int	main(void)
// {
// 	char	s1[] = "Aaa";
// 	char	s2[] = "Aaab";
// 	char	s3[] = "What the value @!)({}a";
// 	char	s4[] = "What the value @!)({}";
//
// 	printf("Diff 1 %d\n", ft_strcmp(s1, s2));
// 	printf("Diff 1 of function %d\n", strcmp(s1, s2));
// 	printf("Diff 2 %d\n", ft_strcmp(s3, s4));
// 	printf("Diff 2 of function %d\n", strcmp(s3, s4));
// 	return (0);
// }
