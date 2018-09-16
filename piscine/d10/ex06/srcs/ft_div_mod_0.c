/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod_0.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 16:01:25 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/16 11:45:28 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_div_mod_0(char c, int b)
{
	char	*error_div;
	char	*error_mod;

	error_div = "Stop : division by zero";
	error_mod = "Stop : modulo by zero";
	if ((c == '/' || c == '%') && b == 0)
	{
		if (c == '/')
		{
			ft_putstr(error_div);
			ft_putchar('\n');
			return (0);
		}
		else if (c == '%')
		{
			ft_putstr(error_mod);
			ft_putchar('\n');
			return (0);
		}
	}
	return (1);
}
