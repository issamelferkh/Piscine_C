/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fonction.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/27 14:32:10 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/27 21:15:09 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FONCTION_H
# define FT_FONCTION_H

# include <stdlib.h>
# include <unistd.h>

int		eval_expr(char *str);

char	*ft_calculate_p(char *str);

char	*ft_calculate_as(char *str);

char	*ft_calculate_mnd(char *str);

void	itoa_isnegative(int *n, int *negative);

char	*ft_itoa(int n);

int		ft_atoi(char *str);

void	ft_free(char *str);

int		call_eval_expr(char *str, int i_first, int i_last);

void	ft_putstr(char *str);

char	*ft_strnew(char *str, int i_first, int i_last);

char	*ft_str_replace(char *str, int i_first, int i_last, int nb);

char	*ft_strtrim(char *str);

int		ft_str_find(char *str, char *tofind);

int		ft_strlen(char *str);

char	*ft_strcat(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src);

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strdup(char *src);

int		*ft_find_index(char *str, int *idx);

#endif
