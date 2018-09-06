/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 11:16:52 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/06 21:15:04 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdlib.h>
char	**ft_split_whitespaces(char	*str);

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

struct	s_stock_par	*ft_param_to_tab(int ac, char **av)
{
	int		i;
	int		j;
	t_stock_par		*r;

	i = 0;
	j = 0;
	r = (t_stock_par*)malloc(sizeof(t_stock_par) + (ac + 1));
	while (i < ac)
	{
		r[i].size_param = ft_strlen(av[i]);
		r[i].str = av[i];
		r[i].copy = (char*)malloc(sizeof(char*) * (r[i].size_param + 1));
		while (j < r[i].size_param)
		{
			r[i].copy[i] = av[i][j];
			j++;
		}
		r[i].tab = ft_split_whitespaces(av[i]);
		i++;

	}
	return (r);
}

int		main(int ac, char **av)
{
	ft_param_to_tab(ac, av);
	return (0);
}
