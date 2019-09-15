/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 03:28:32 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/30 03:28:39 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

char				*ft_strdup(char *src)
{
	int		i;
	int		size;
	char	*dest;

	i = 0;
	size = 0;
	while (src[size] != '\0')
		size++;
	dest = (char*)malloc(sizeof(*dest) * (size + 1));
	if (dest)
	{
		while (src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (dest);
}

struct s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int					i;
	int					j;
	struct s_stock_par	*str;

	str = (struct s_stock_par*)malloc(sizeof(*str) * (ac + 1));
	if (str)
	{
		i = 0;
		while (i < ac)
		{
			j = 0;
			while (av[i][j])
				j++;
			str[i].size_param = j;
			str[i].str = av[i];
			str[i].copy = ft_strdup(av[i]);
			str[i].tab = ft_split_whitespaces(av[i]);
			i++;
		}
		str[i].str = 0;
	}
	return (str);
}
