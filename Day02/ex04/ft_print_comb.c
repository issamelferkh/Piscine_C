/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 09:35:52 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/09 18:52:30 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = -1;
	while (++i <= 9)
	{
		j = i;
		while (++j <= 9)
		{
			k = j;
			while (++k <= 9)
			{
				ft_putchar(i + 48);
				ft_putchar(j + 48);
				ft_putchar(k + 48);
				if (!(i == 7 && j == 8 && k == 9))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}
