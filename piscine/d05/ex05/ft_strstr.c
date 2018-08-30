/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 13:36:44 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/30 15:30:23 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char	*to_find)
{
	int		i;
	int		pos;
	int		find_size;

	i = 0;
	pos = 0;
	find_size = 0;
	while (to_find[find_size])
		find_size++;
	if (find_size == 0)
		return (str);
	while (str[i])
	{
		while (to_find[pos] == str[i + pos])
		{
			if (pos == find_size - 1)
				return (str + i);
			pos++;
		}
		pos = 0;
		i++;
	}
	return (0);
}

		
int		main(int argc, char **argv)
{
	argc = 0;
	printf("%s", ft_strstr(argv[1], argv[2]));
	printf("%s", strstr(argv[1], argv[2]));
	return (0);
}
