/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 19:12:42 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/16 17:14:53 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int r;

	r = 1;
	if (((nb == 0) && (power != 0)) || (power < 0))
		return (0);
	else if ((power == 0) || ((nb < 0) && (power == 0)))
		return (1);
	while (power > 0)
	{
		r = r * nb;
		power--;
	}
	return (r);
}
