/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 12:32:55 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/18 17:07:42 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear(t_list **begin_list)
{
	t_list	*elem;
	t_list	*tmp;

	elem = *begin_list;
	while (begin_list)
	{
		tmp = elem->next;
		free(elem);
		elem = tmp;

	}
	*begin_list = NULL;
}
		

