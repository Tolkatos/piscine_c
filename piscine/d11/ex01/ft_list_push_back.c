/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 11:47:16 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/17 12:35:38 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"
t_list	*ft_create_elem(void *data);

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*list;
	t_list	*tmp;

	tmp = *begin_list;
	list = ft_create_elem(data);
	while (tmp -> next != 0)
		tmp = tmp -> next;
	tmp -> next = list;
}

int		main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	a = ft_create_elem("1");
	b = ft_create_elem("2");
	c = ft_create_elem("3");
	a->next = b;
	b->next = c;
	ft_list_push_back(&a, "4");
	while (a)
	{
		printf("%s \n", a->data);
		a = a->next;
	}
	return (0);
}
