/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/22 10:56:09 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/23 04:39:19 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alphanumeric(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')
			|| (c >= '0' && c <= '9'))
		return (1);
	return (0);
}

int		is_alphabetic(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		if (is_alphabetic(str[i]))
		{
			if (is_alphanumeric(str[i - 1]))
			{
				if ('A' <= str[i] && str[i] <= 'Z')
					str[i] = str[i] + 32;
			}
			else if ('a' <= str[i] && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
