/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 18:26:36 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/29 18:54:02 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	if (nb != 2 && (nb % 2 == 0 || nb % 2 == 5))
		return (0);
	while (i <= nb)
	{
		if (nb % i != 1)
			return (0);
		else
			return (1);
		i++;
	}
	return (1);
}

int		main(void)
{
	printf("%d", ft_is_prime(18));
	return (0);
}
