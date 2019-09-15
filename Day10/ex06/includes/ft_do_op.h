/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iel-ferk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 14:31:26 by iel-ferk          #+#    #+#             */
/*   Updated: 2019/01/31 09:57:35 by iel-ferk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DO_OP_H
# define FT_DO_OP_H

void	ft_init(int (**f)(int x, int y));
void	ft_init_op(char *tab);
int		ft_exception(char **av);
int		ft_do_op(int (*f)(int, int), char *a, char *b);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
int		ft_putstr(char *str);
int		ft_is_alpha(char c);
int		add(int opr1, int opr2);
int		sub(int opr1, int opr2);
int		mul(int opr1, int opr2);
int		div(int opr1, int opr2);
int		mod(int opr1, int opr2);

#endif
