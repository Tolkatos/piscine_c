/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 12:45:38 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/30 13:08:24 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	while (j < i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}

/*
**int		main(int argc, char **argv)
**{
**	argc = 0;
**	printf("%s", ft_strcpy(argv[1],argv[2]));
**	return (0);
**}
*/
