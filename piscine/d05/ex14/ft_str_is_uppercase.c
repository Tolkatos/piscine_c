/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 10:46:25 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/31 10:56:59 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_str_is_uppercase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	argc = 0;
	printf("%d", ft_str_is_uppercase(argv[1]));
	return (0);
}
