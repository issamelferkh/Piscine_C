/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 14:31:47 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/27 20:59:21 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fonction.h"

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

char	*ft_strtrim(char *str)
{
	char	*dest;
	int		len_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	len_str = ft_strlen(str);
	dest = (char *)malloc(sizeof(char) * len_str);
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			dest[j] = str[i];
			j++;
		}
		i++;
	}
	dest[j] = '\0';
	ft_free(str);
	return (dest);
}

char	*ft_strnew(char *str, int i_first, int i_last)
{
	char	*new_str;
	int		cpt;

	new_str = malloc(sizeof(char*) * (i_last - i_first) + 1);
	cpt = 0;
	i_first++;
	while (i_first < i_last)
	{
		new_str[cpt] = str[i_first];
		i_first++;
		cpt++;
	}
	new_str[cpt] = '\0';
	return (new_str);
}

int		ft_str_find(char *str, char *tofind)
{
	int str_len;
	int tofind_len;
	int i;
	int j;

	str_len = ft_strlen(str);
	tofind_len = ft_strlen(tofind);
	i = 0;
	while (i < tofind_len)
	{
		j = 0;
		while (j < str_len)
		{
			if (str[j] == tofind[i] && (j != 0 || str[j] == '('))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

char	*ft_str_replace(char *str, int i_first, int i_last, int nb)
{
	char	*nb_str;
	char	*result;
	int		result_len;

	nb_str = ft_itoa(nb);
	result_len = ft_strlen(str) - (i_last - i_first) + ft_strlen(nb_str);
	result = malloc(sizeof(char) * result_len + 10);
	result = ft_strncpy(result, str, (unsigned int)i_first);
	result = ft_strcat(result, nb_str);
	result = ft_strcat(result, str + i_last + 1);
	ft_free(str);
	return (result);
}
