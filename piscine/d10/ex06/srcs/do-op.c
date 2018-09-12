/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 10:00:34 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/12 21:10:21 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_addition(int a, int b);
int		ft_soustraction(int a, int b);
int		ft_multiplication(int a, int b);
int		ft_division(int a, int b);
int		ft_modulo(int a, int b);
int		ft_check_operateur(char c);
int		ft_div_mod_0(char c, int b);
int		ft_putnbr(int nb);
void	ft_putchar(char c);

int		ft_do_op(int a, char c,  int b)
{
	int		(*op[5])(int, int);
	int		result;

	result = 0;	
	op[0] = ft_addition;
   	op[1] = ft_soustraction;
   	op[2] =	ft_multiplication;
   	op[3] = ft_division;
	op[4] = ft_modulo;

	if (ft_check_operateur(c) == 0)
		return (0);
	if (c == '+')
		result = (*op[0])(a, b);
	else if (c == '-')
		result = (*op[1])(a, b);
	else if (c == '*')
		result = (*op[2])(a, b);
	else if (c == '/')
		result = (*op[3])(a, b);
	else if (c == '%')
		result = (*op[4])(a, b);
	return (result);
}

int		main(int argc, char **argv)
{
	argc = 0;
	if (argv[2][1] != '\0')
	{
		ft_putchar('0');
		return (0);
	}
	if (ft_div_mod_0(*argv[2], atoi(argv[3])) == 0)
		return (0);
	ft_putnbr(ft_do_op(atoi(argv[1]), *argv[2], atoi(argv[3])));
	return (0);
}

