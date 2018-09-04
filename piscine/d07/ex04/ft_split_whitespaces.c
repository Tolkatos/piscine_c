/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 20:17:58 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/04 18:01:30 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
char	**ft_calc_nbr_word(char *str, char **tab)
{
	int		i;
	int		nb; 

	nb = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
			i++;
		else
		{
			while (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i])
					i++;
			nb++;
		}
	}
	printf("%d", nb);
	tab = (char**)malloc(sizeof(*tab) * (nb + 1));
	return (tab);
}	

char	**ft_calc_len_word(char *str, char **tab)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
			i++;
		else
		{
			while (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i])
			{
				i++;
				j++;
			}
			printf("%d", j);
			tab[k] = (char*)malloc(sizeof(*tab) * j + 1);
			j = 0;
		}
	}
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;

	tab = NULL;
	tab = ft_calc_nbr_word(str, tab);
	tab = ft_calc_len_word(str, tab);

	return (tab);
}


int		main(int argc, char **argv)
{
	argc = 0;
	ft_split_whitespaces(argv[1]);
	return (0);
}




