/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 13:30:50 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/28 13:43:44 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int temp_a;

	temp_a = *a;
	*a = *b;
	*b = temp_a;
	printf("%d,%d", *a, *b);
}

int		main(void)
{
	int a;
	int b;

	a = 5;
	b = 10;
	ft_swap(&a, &b);
	return 0;
}	
