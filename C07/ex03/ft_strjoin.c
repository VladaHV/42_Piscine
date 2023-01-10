/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 00:43:12 by vhonchar          #+#    #+#             */
/*   Updated: 2022/10/03 13:28:26 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_cal_flen(char **strings, int size, int s_len)
{
	int	f_len;
	int	i;

	f_len = 0;
	i = 0;
	while (i < size)
	{
		f_len += ft_strlen(strings[i]);
		f_len += s_len;
		i++;
	}
	f_len -= s_len;
	return (f_len);
}

int	ft_strconc(char **strs, int size, char *sep, char *string)
{
	int		i;
	char	*d;

	d = string;
	if (!d)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(d, strs[i]);
		d += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(d, sep);
			d += ft_strlen(sep);
		}
		i++;
	}
	*d = '\0';
	return (0);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_len;
	char	*string;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_len = ft_cal_flen(strs, size, ft_strlen(sep));
	string = (char *)malloc((full_len + 1) * sizeof(char));
	ft_strconc(strs, size, sep, string);
	return (string);
}

int	main(void)
{
	char	**strs;
	char	*sep;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	//strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	//strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	//strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello!";
	strs[1] = "My";
	strs[2] = "name is Vlada!";
	sep = " * ";
	result = ft_strjoin(size, strs, sep);
	printf("%s\n", result);
	free(result);
}