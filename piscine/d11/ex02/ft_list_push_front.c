/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 16:17:47 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/17 12:31:15 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>

t_list		*ft_create_elem(void *data);

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*elem;
	
	elem = ft_create_elem(data); 
	if (elem)
		elem->next = *begin_list;
	printf("%s", elem->data);
}

int     main(void)
{
	t_list  *a;
	t_list  *b;
	t_list  *c;
	t_list	*d;

	a = ft_create_elem("1");
	b = ft_create_elem("2");
	c = ft_create_elem("3");
	d = ft_create_elem("4");
	ft_list_push_front(&a, "5");
	a->next = b;
	b->next = c;
	c->next = d;
	printf("%s \n", a->data);
	return (0);
}
