/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 03:06:25 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/29 10:12:41 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int size;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	*range = (int*)malloc(sizeof(int) * size);
	i = 0;
	while (min < max)
	{
		range[0][i] = min;
		min++;
		i++;
	}
	return (size);
}
