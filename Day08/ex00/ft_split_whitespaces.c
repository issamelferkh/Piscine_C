/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 03:25:10 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/30 03:27:08 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int		ft_count(char *str)
{
	int		i;
	int		nb;
	int		flag;

	i = 0;
	nb = 0;
	flag = 0;
	while (str[i])
	{
		if (ft_is_whitespace(str[i]) && flag == 1)
			flag = 0;
		if (!ft_is_whitespace(str[i]) && flag == 0)
		{
			nb++;
			flag = 1;
		}
		i++;
	}
	return (nb);
}

int		ft_size(char *str, int p)
{
	int		i;

	i = p;
	while (str[i] && !ft_is_whitespace(str[i]))
		i++;
	return (i - p);
}

void	ft_position(char *str, int *p)
{
	while (str[*p])
	{
		if (!ft_is_whitespace(str[*p]))
			return ;
		(*p)++;
	}
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		len;
	int		p[1];
	char	**tab_str;

	i = 0;
	*p = 0;
	tab_str = (char**)malloc((ft_count(str) + 1) * sizeof(char*));
	if (tab_str)
	{
		while (i < ft_count(str))
		{
			j = 0;
			ft_position(str, p);
			len = ft_size(str, *p);
			tab_str[i] = (char*)malloc((len + 1) * sizeof(char));
			while (j < len)
				tab_str[i][j++] = str[(*p)++];
			tab_str[i][j] = '\0';
			i++;
		}
		tab_str[i] = 0;
	}
	return (tab_str);
}
