/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adv_opp.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 03:47:09 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/31 09:58:52 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ADV_OPP_H
# define FT_ADV_OPP_H
# include <unistd.h>

typedef struct		s_opp
{
	char			*str;
	void			(*f)(int, int);
}					t_opp;

void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nbr);
int					ft_atoi(char *s);
int					ft_strcmp(char *s1, char *s2);
void				ft_add(int a, int b);
void				ft_sub(int a, int b);
void				ft_mul(int a, int b);
void				ft_div(int a, int b);
void				ft_mod(int	a, int b);
void				ft_usage(int a, int b);
#endif
