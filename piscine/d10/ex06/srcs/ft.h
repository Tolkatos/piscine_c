/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 11:16:42 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/16 11:57:26 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

int		ft_addition(int a, int b);
int		ft_soustraction(int a, int b);
int		ft_multiplication(int a, int b);
int		ft_division(int a, int b);
int		ft_modulo(int a, int b);
int		ft_check_operateur(char c);
int		ft_div_mod_0(char c, int b);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_atoi(char *str);

#endif
