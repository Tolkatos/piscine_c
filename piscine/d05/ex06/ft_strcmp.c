/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 15:33:53 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/30 15:48:33 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s1[i] == s2[i])
		return (s1[i] - s2[i]);
	return (0);
}

int		main(int argc, char **argv)
{
	argc = 0;
	printf("%d", ft_strcmp(argv[1], argv[2]));
	printf("%d", strcmp(argv[1], argv[2]));
	return (0);
}
