/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 16:37:01 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/29 18:24:22 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int		ft_sqrt(int nb)
{
	int		i;

	i = 1;
	if (nb == 0)
		return(0);

	while (nb > i * i)
		i++;

	if (nb == i * i)
		return (i);
	return(0);
}

int		main(void)
{
	printf("%d", ft_sqrt(26));
	return (0);
}
