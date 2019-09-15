/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 21:44:33 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/20 08:01:04 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int ac, char **av)
{
	int i;

	if (ac > 1)
	{
		i = ac - 1;
		while (i > 0)
		{
			putstr(av[i]);
			ft_putchar('\n');
			i--;
		}
	}
	return (0);
}
