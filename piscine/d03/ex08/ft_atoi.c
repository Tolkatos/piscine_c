/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 16:05:49 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/29 09:07:39 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
	int i;
	int s;
	int r;

	i = 0;
	s = 1;
	r = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\r' || str[i] == '\v' || str[i] == ' ' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		i++;
		s = -1;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r *= 10;
		r += str[i] - '0';
		i++;
	}
	return (r * s);	
}

int		main(int argc, char **argv)
{
	argc = 0;
//	(void)argc;
	printf("%d", ft_atoi(argv[1]));
	printf("%s", "\n");
	printf("%d", atoi(argv[1]));
	return (0);
}
