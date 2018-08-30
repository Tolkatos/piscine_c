/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 16:16:07 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/30 16:23:06 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (s1[n] &&	s2[n])
	{
		if (s1[n] != s2[n])
			return (s1[n] - s2[n]);
		n++;
	}
	if (s1[n] == s2[n])
		return (s1[n] - s2[n]);
	return (0);
}

int		main(int argc, char **argv)
{
	argc = 0;
	printf("%d", ft_strncmp(argv[1], argv[2], 3));
	printf("%d", ft_strncmp(argv[1], argv[2], 3));
	return (0);
}
