/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 03:49:29 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/31 09:57:07 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_adv_opp.h"

void	ft_add(int a, int b)
{
	ft_putnbr(a + b);
}

void	ft_sub(int a, int b)
{
	ft_putnbr(a - b);
}

void	ft_mul(int a, int b)
{
	ft_putnbr(a * b);
}

void	ft_div(int a, int b)
{
	if (!b)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(a / b);
}

void	ft_mod(int a, int b)
{
	if (!b)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(a % b);
}
