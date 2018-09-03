/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 14:20:36 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/03 14:50:47 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
int		ft_ultimate_range(int **range, int min, int max)
{
	int		*tab;
	int		i;

	i= 0;
	tab = malloc(sizeof(int) * (max - min));
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	tab[i] = '\0';
	*range = tab;
	printf("%d", range[0][8]);
	return (i);
}

int		main(void)
{
	int		*r;

	r = 0; 
	ft_ultimate_range(&r, 1, 10);
	return (0);
}
