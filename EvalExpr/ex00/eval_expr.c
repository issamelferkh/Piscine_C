/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 14:30:00 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/27 21:17:07 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fonction.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr > 9)
		ft_putnbr(nbr / 10);
	ft_putchar(nbr % 10 + '0');
}

char	*found_and_calc(char *cpy, int *found)
{
	if (ft_str_find(cpy, "("))
	{
		cpy = ft_calculate_p(cpy);
		*found = 1;
	}
	else if (ft_str_find(cpy, "*%/"))
	{
		cpy = ft_calculate_mnd(cpy);
		*found = 1;
	}
	else if (ft_str_find(cpy, "+-"))
	{
		cpy = ft_calculate_as(cpy);
		*found = 1;
	}
	return (cpy);
}

int		eval_expr(char *str)
{
	int		found;
	char	*cpy;
	int		nb;

	cpy = ft_strdup(str);
	cpy = ft_strtrim(cpy);
	found = 1;
	while (found == 1)
	{
		found = 0;
		cpy = found_and_calc(cpy, &found);
	}
	nb = ft_atoi(cpy);
	ft_free(cpy);
	return (nb);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
