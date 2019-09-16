/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 14:31:38 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/27 21:17:57 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fonction.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int j;
	int len_src;

	i = 0;
	j = ft_strlen(dest);
	len_src = ft_strlen(src);
	while (i < len_src)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dest;

	len = ft_strlen(src) + 1;
	dest = malloc(sizeof(char) * len);
	if (dest)
		return (ft_strcpy(dest, src));
	return (0);
}
