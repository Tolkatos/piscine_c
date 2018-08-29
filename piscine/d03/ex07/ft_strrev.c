/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 15:11:31 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/29 10:00:14 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = 0;
	tmp = 0;
	while (str[i])
		i++;
	while (j < i - 1)
	{
		tmp = str[j];
		str[j] = str[i - 1];
		str[i - 1] = tmp;
		j++;
		i--;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	printf("%s", ft_strrev(argv[1]));
	return (0);
}
