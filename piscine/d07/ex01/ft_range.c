/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 13:22:10 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/03 14:11:21 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
int		*ft_range(int min, int max)
{
	int		*r;
	int		i;

	i = 0;
	r = NULL;
	if (min >= max)
		return (r);
	r = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		r[i] = min;
		min++;
		i++;
	}
	printf("%d", r[8]);
	return (r);
}

int		main(void)
{
	ft_range(1, 100);
	return (0);
}
