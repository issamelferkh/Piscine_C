/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 14:29:49 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/31 09:56:31 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*flag;

	flag = (int*)malloc(sizeof(*flag) * length);
	if (flag)
	{
		i = 0;
		while (i < length)
		{
			flag[i] = (*f)(tab[i]);
			i++;
		}
	}
	return (flag);
}
