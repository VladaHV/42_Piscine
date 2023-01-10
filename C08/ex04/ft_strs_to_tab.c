/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:42:10 by vhonchar          #+#    #+#             */
/*   Updated: 2022/10/03 11:42:10 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_str_length(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	long	i;
	char	*cp;

	i = 0;
	cp = (char *)malloc(150);
	while (src[i] != '\0')
	{
		cp[i] = src[i];
		i++;
	}
	cp[i] = '\0';
	return (cp);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*arr;

	arr = malloc((ac + 1) * sizeof(t_stock_str));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		arr[i].size = ft_str_length(av[i]);
		arr[i].str = av[i];
		arr[i].copy = ft_strdup(av[i]);
		i++;
	}
	arr[i].str = 0;
	arr[i].copy = 0;
	return (arr);
}

// int	main(int argc, char **argv)
// {
// 	int			index;
// 	t_stock_str	*structs;
//
// 	structs = ft_strs_to_tab(argc, argv);
// 	index = 0;
// 	while (index < argc)
// 	{
// 		printf("Index of argc %d\n", index);
// 		printf("Origin: $%s$ @ %p\n", structs[index].str, structs[index].str);
// 		printf("Copy: $%s$ @ %p\n", structs[index].copy, structs[index].copy);
// 		printf("size : %d\n", structs[index].size);
// 		index++;
// 	}
// }
//