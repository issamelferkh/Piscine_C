/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 03:29:04 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/30 03:29:10 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

void	ft_putnbr(int nb)
{
	int		tmp;
	int		count;

	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar(2 + 48);
			nb = 147483648;
		}
		else
			nb = -nb;
	}
	tmp = nb;
	count = 1;
	while ((tmp = tmp / 10) >= 1)
		count *= 10;
	while (count >= 1)
	{
		ft_putchar((nb / count) + 48);
		nb = nb % count;
		count = count / 10;
	}
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_print_words_tables(char **tab)
{
	int		i;
	int		j;

	if (tab)
	{
		i = 0;
		while (tab[i])
		{
			j = 0;
			while (tab[i][j])
			{
				ft_putchar(tab[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
}

void	ft_show_tab(struct s_stock_par *par)
{
	int		i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		ft_putchar('\n');
		ft_putnbr(par[i].size_param);
		ft_putchar('\n');
		ft_print_words_tables(par[i].tab);
		i++;
	}
}
