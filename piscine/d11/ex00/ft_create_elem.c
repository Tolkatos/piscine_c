/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 10:25:09 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/17 10:47:46 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list		*elem;

	elem = (t_list*)malloc(sizeof(t_list));
	if (elem == NULL)
		return (0);
	if (elem)
	{
		elem->data = data;
		elem->next = NULL;
	}
	return (elem);
}

int     main(void)
{
	t_list  *a;
	t_list  *b;
	t_list  *c;

	a = ft_create_elem("1");
	b = ft_create_elem("2");
	c = ft_create_elem("3");
	a->next = b;
	b->next = c;
//	ft_list_push_back(&a, "4");
	while (a)
	{
		printf("%s \n", a->data);
		a = a->next;
	}
	return (0);
}
