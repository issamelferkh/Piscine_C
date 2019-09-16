/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 14:30:46 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/27 20:58:28 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fonction.h"

void	ft_free(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] = '\0';
		i++;
	}
	free(str);
}

int		call_eval_expr(char *str, int i_first, int i_last)
{
	char	*tmp;
	int		nb;

	tmp = ft_strnew(str, i_first, i_last);
	nb = eval_expr(tmp);
	ft_free(tmp);
	return (nb);
}
