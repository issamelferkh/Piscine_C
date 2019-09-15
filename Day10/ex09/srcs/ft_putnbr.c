/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 03:50:01 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/31 09:55:14 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int		tmp;
	int		count;

	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar(2 + 48);
			nb = 147483648;
		}
		else
			nb = -nb;
	}
	tmp = nb;
	count = 1;
	while ((tmp = tmp / 10) >= 1)
		count *= 10;
	while (count >= 1)
	{
		ft_putchar((nb / count) + 48);
		nb = nb % count;
		count = count / 10;
	}
}
