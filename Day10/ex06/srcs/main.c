/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 03:44:24 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/31 10:00:29 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_do_op.h"

int		main(int argc, char **argv)
{
	int		i;
	int		(*f_ptr[5]) (int x, int y);
	char	op_tab[5];

	if (argc == 4)
	{
		if (ft_exception(argv))
			return (0);
		ft_init(f_ptr);
		ft_init_op(op_tab);
		i = 0;
		while (i < 5)
		{
			if (argv[2][0] == op_tab[i])
			{
				ft_putnbr(ft_do_op(f_ptr[i], argv[1], argv[3]));
				return (0);
			}
			i++;
		}
		ft_putnbr(0);
	}
	return (0);
}
