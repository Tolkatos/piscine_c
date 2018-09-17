/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 12:38:13 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/17 13:32:48 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>

t_list	*ft_create_elem(void *data);

int		ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*elem;

	i = 0;
	elem = begin_list;
	while (elem)
	{
		elem = elem->next;
		i++;
	}
	return (i);
}

int		main()
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	a = ft_create_elem("1");
	b = ft_create_elem("2");
	c = ft_create_elem("3");
	a->next = b;
	b->next = c;
	printf("%d \n", ft_list_size(a));
	return (0);
}
