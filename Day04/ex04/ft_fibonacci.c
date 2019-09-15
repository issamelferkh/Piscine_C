/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 21:40:14 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/15 22:03:22 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	flag;

	flag = 0;
	if ((index == 0) || (index == 1))
		flag = index;
	else if (index > 1)
		flag = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	else
		flag = -1;
	return (flag);
}
