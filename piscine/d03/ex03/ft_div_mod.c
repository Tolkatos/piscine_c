/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 13:46:16 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/29 09:50:19 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
	printf("%d", *div);
}

int		main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 5;
	b = 2;
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	return (0);
}
