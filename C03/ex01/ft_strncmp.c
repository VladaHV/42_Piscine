/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 09:07:21 by vhonchar          #+#    #+#             */
/*   Updated: 2022/09/23 09:07:21 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
//
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	diff = 0;
	i = 0;
	while ((n > i) && ((*(s1 + i) != '\0') || (*(s2 + i) != '\0')))
	{
		if (*(s1 + i) != *(s2 + i))
		{
			diff = *(s1 + i) - *(s2 + i);
			return (diff);
		}
		else
			i++;
	}
	return (diff);
}

// int	main(void)
// {
// 	char	s1[] = "A";
// 	char	s2[] = "Aza";
// 	char	s3[] = "Yes";
// 	char	s4[] = "No";
//
// 	printf("Diff 1 %d\n", ft_strncmp(s1, s2, 10));
// 	printf("Diff 1 %d\n", strncmp(s1, s2, 10));
// 	printf("Diff 2 %d\n", ft_strncmp(s3, s4, 2));
// 	printf("Diff 2 %d\n", strncmp(s3, s4, 2));
// 	return (0);
// }
//