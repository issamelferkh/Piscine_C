/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 03:45:26 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/31 09:58:48 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_do_op.h"

int		add(int opr1, int opr2)
{
	return (opr1 + opr2);
}

int		sub(int opr1, int opr2)
{
	return (opr1 - opr2);
}

int		mul(int opr1, int opr2)
{
	return (opr1 * opr2);
}

int		div(int opr1, int opr2)
{
	return (opr1 / opr2);
}

int		mod(int opr1, int opr2)
{
	return (opr1 % opr2);
}
