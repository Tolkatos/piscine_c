/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 10:00:34 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/16 11:57:59 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdlib.h>

int		ft_do_op(int a, char c, int b)
{
	int		(*op[5])(int, int);
	int		result;

	result = 0;
	op[0] = ft_addition;
	op[1] = ft_soustraction;
	op[2] = ft_multiplication;
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
	if (argc == 4)
	{
		if (argv[2][1] != '\0')
		{
			ft_putchar('0');
			ft_putchar('\n');
			return (0);
		}
		if (ft_div_mod_0(*argv[2], ft_atoi(argv[3])) == 0)
			return (0);
		else
		{
			ft_putnbr(ft_do_op(ft_atoi(argv[1]), *argv[2], ft_atoi(argv[3])));
			ft_putchar('\n');
		}
	}
	else
		return (0);
	return (0);
}
