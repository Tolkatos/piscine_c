/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 12:44:52 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/16 11:06:29 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*r_tab;

	i = 0;
	r_tab = (int*)malloc(sizeof(int) * length);
	if (r_tab == NULL)
		return (NULL);
	while (i < length)
	{
		r_tab[i] = f(tab[i]);
		i++;
	}
	return (r_tab);
}
