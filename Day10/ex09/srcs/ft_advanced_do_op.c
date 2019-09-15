/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_do_op.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 03:49:05 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/31 09:58:20 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_adv_opp.h"
#include "../includes/ft_opp.h"

void	ft_usage(int a, int b)
{
	a = b;
	ft_putstr("error : only [ + - * / % ] are accepted.\n");
}

int		main(int argc, char **argv)
{
	int		i;
	void	(*fct)(int, int);

	i = 0;
	if (argc == 4)
	{
		while (i < 5)
		{
			if (ft_strcmp(argv[2], g_opptab[i].str) == 0)
			{
				fct = g_opptab[i].f;
				(*fct)(ft_atoi(argv[1]), ft_atoi(argv[3]));
				ft_putchar('\n');
				return (0);
			}
			i++;
		}
		fct = g_opptab[i].f;
		(*fct)(69, 89);
	}
	return (0);
}
