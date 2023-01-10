/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vhonchar <vhonchar@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 10:58:41 by vhonchar          #+#    #+#             */
/*   Updated: 2022/10/03 10:58:41 by vhonchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef enum s_bool
{
	false,
	true
}	t_bool;

# define ODD_MSG	"I have an odd number of arguments.\n"
# define EVEN_MSG	"I have an even number of arguments.\n"
# define TRUE		true
# define FALSE		false
# define SUCCESS	0
# define EVEN(number) (number % 2 == 0)

#endif