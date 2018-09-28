/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 01:33:14 by seli              #+#    #+#             */
/*   Updated: 2018/09/28 02:04:33 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_show_tab(struct s_stock_par *par)
{
	int i;

	while (par)
	{
		i = 0;
		ft_putstr(par->copy);
		ft_putnbr(par->size_param);
		while (par->tab[i])
		{
			ft_putstr(par->tab[i++]);
			ft_putchar('\n');
		}
		par++;
	}
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr(int nb)
{
	int	divisor;
	int	c;

	if (nb < 0)
		ft_putchar('-');
	divisor = 1000000000;
	while (nb / divisor == 0 && divisor != 1)
	{
		divisor /= 10;
	}
	while (divisor != 1)
	{
		c = (nb / divisor) % 10;
		if (c < 0)
			c = -c;
		ft_putchar(c + '0');
		divisor /= 10;
	}
	c = nb % 10;
	if (c < 0)
		c = -c;
	ft_putchar(c + '0');
}
