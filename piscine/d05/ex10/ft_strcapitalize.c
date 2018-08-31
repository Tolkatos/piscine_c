/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 17:14:02 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/31 09:55:50 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	str = ft_strlowcase(str);
	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			i++;
			while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9'))
				i++;
		}
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	argc = 0;
	printf("%s", ft_strcapitalize(argv[1]));
	return (0);
}
