/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 09:42:02 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/29 10:13:08 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_str_nbr(char *str)
{
	int nbr;
	int flag;
	int i;

	nbr = 0;
	flag = 0;
	i = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n'
				|| str[i] == '\t' || str[i] == '\0')
		{
			flag = 0;
		}
		else
		{
			if (flag == 0)
				nbr++;
			flag = 1;
		}
		i++;
	}
	return (nbr);
}

char	*ft_cat_word(char *str, int *n)
{
	char	*word;
	int		i;
	int		i_first;
	int		i_last;

	i = *n;
	while (str[i] <= ' ')
		i++;
	i_first = i;
	while (str[i] > ' ')
		i++;
	i_last = i;
	*n = i;
	word = (char*)malloc(sizeof(char) * i_last - i_first);
	i = 0;
	while (i_first < i_last)
	{
		word[i] = str[i_first];
		i_first++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int		j;
	int		i;

	res = (char**)malloc(sizeof(char*) * ft_str_nbr(str) + 1);
	j = 0;
	i = 0;
	while (j < ft_str_nbr(str))
	{
		res[j] = ft_cat_word(str, &i);
		j++;
	}
	res[j] = 0;
	return (res);
}
