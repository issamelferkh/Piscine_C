/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 03:45:38 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/31 10:09:21 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_do_op.h"

int		ft_is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

void	ft_init(int (**f)(int x, int y))
{
	f[0] = &add;
	f[1] = &sub;
	f[2] = &mul;
	f[3] = &div;
	f[4] = &mod;
}

void	ft_init_op(char *tab)
{
	tab[0] = '+';
	tab[1] = '-';
	tab[2] = '*';
	tab[3] = '/';
	tab[4] = '%';
}

int		ft_do_op(int (*f)(int, int), char *a, char *b)
{
	int		operand1;
	int		operand2;

	operand1 = ft_atoi(a);
	operand2 = ft_atoi(b);
	return ((*f)(operand1, operand2));
}

int		ft_exception(char **av)
{
	if (ft_is_alpha(av[1][0]) || ft_is_alpha(av[3][0]))
	{
		if (av[2][0] == '/' || av[2][0] == '%')
		{
			ft_putnbr(0);
			return (1);
		}
	}
	if (av[2][0] == '/' && ft_atoi(av[3]) == 0)
	{
		ft_putstr("Stop : division by zero\n");
		return (1);
	}
	if (av[2][0] == '%' && ft_atoi(av[3]) == 0)
	{
		ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	return (0);
}
