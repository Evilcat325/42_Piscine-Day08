/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 00:16:13 by seli              #+#    #+#             */
/*   Updated: 2018/09/28 01:32:42 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	**ptr;
	int			i;

	i = 0;
	ptr = (t_stock_par **)malloc(sizeof(t_stock_par *) * ac);
	if (!ptr)
		return ((t_stock_par *)0);
	while (i < ac)
	{
		ptr[i]->size_param = ft_strlen(av[i]);
		ptr[i]->str = av[i];
		ptr[i]->copy = ft_strdup(av[i]);
		ptr[i]->tab = ft_split_whitespaces(av[i]);
	}
	ptr[i] = (t_stock_par *)0;
	return (ptr[0]);
}

char				*ft_strdup(char *src)
{
	char			*dst;
	unsigned int	srclen;
	unsigned int	i;

	i = 0;
	srclen = ft_strlen(src);
	dst = (char *)malloc(sizeof(char) * (srclen + 1));
	while (i < srclen)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (dst);
}

int					ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}
