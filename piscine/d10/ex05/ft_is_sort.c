/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 13:05:38 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/11 22:31:43 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_is_sort(int *tab, int length, int(*f)(int, int))
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

int		main()
{
	int		tab[9] = {8, 5, 3, 4, 5, 6, 7, 8, 9};
	
	printf("%d", ft_is_sort(tab, 9, &ft_cmp));
	return (0);
}
