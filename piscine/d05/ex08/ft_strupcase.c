/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 16:25:14 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/30 17:07:48 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
char	*ft_strupcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		str[i] -= 32;
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	argc = 0;
	printf("%s", ft_strupcase(argv[1]));
	return (0);
}
	
