/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 17:09:17 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/30 17:12:08 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		str[i] += 32;
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	argc = 0;
	printf("%s", ft_strlowcase(argv[1]));
	return (0);
}

