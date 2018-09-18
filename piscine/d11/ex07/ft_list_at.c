/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 17:08:28 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/18 17:18:49 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	int		i;
	t_list	*elem;

	elem = begin_list;
	i = 0;
	while (begin_list && i < nbr)
	{
		elem = elem->next;
		i++;
	}
	return (elem);
}


