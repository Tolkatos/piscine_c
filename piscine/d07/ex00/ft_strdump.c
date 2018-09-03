/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 13:05:52 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/03 13:18:31 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	i = 0;
	dest = 0;
	while (src[i])
		i++;
	dest = malloc(sizeof(*src) * i);
	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	printf("%s", dest);
	return (dest);
}

int		main(int argc, char **argv)
{
	argc = 0;
	ft_strdup(argv[1]);
	return (0);
}
