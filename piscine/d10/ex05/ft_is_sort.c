/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 13:05:38 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/16 11:14:05 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int		i;

	i = 0;
	while (i < length)
	{
		while (tab[i])
		{
			if (f(tab[i], tab[i + 1]) > 0)
				return (1);
			i++;
		}
	}
	return (0);
}
