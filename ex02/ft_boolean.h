/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/27 23:17:38 by seli              #+#    #+#             */
/*   Updated: 2018/09/27 23:58:32 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# ifndef UNISTD_H
#  define UNISTD_H
#  include <unistd.h>
# endif

# define EVEN(x)	x % 2 == 0
# define TRUE		1
# define FALSE		0
# define EVEN_MSG	"I have an even number of arguments.\n"
# define ODD_MSG	"I have an odd number of arguments.\n"
# define SUCCESS	0

typedef int	t_bool;
void		ft_putstr(char *str);
t_bool		ft_is_even(int nbr);

#endif
