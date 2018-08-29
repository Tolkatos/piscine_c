/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 13:24:04 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/29 16:13:42 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 1)
	   return (nb);	
	return (nb * ft_recursive_power(nb, power - 1));
}

int		main(void)
{
	printf("%d", ft_recursive_power(2, 2));
	return (0);
}
