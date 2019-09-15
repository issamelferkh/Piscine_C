/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/19 22:48:36 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/20 08:12:42 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if ((!s1[i] && s2[i]) || (s1[i] && !s2[i]))
		return (s1[i] - s2[i]);
	return (0);
}

void	aff_p(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	while (i++ < ac - 1)
	{
		j = 0;
		while (av[i][j])
		{
			ft_putchar(av[i][j]);
			j++;
		}
		ft_putchar('\n');
	}
}

int		main(int ac, char **av)
{
	int		i;
	char	*tmp;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			tmp = av[i];
			av[i] = av[i + 1];
			av[i + 1] = tmp;
			i = 0;
		}
		i++;
	}
	aff_p(ac, av);
	return (0);
}
