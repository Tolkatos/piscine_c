/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 20:17:58 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/04 21:40:27 by ranuytte         ###   ########.fr       */
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
	tab = (char**)malloc(sizeof(*tab) * (nb + 1));
	if (tab == NULL)
		return (0);
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
				k++;
			}
			tab[j] = (char*)malloc(sizeof(*tab) * (k + 1));
			if (tab[j] == NULL)
				return (0);
			j++;
			k = 0;
		}
	}
	return (tab);
}

char	**ft_fill_in(char *str, char **tab)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (str[i])
	{
		if ((str[i] == '\n' || str[i] == '\t' || str[i] == ' ') && str[i])
			i++;
		else
		{
			while (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i])
			{
				tab[j][k] = str[i];
				k++;
				i++;
			}
			tab[j][k] = '\0';
			k = 0;
			j++;
		}
	}
	tab[j] = 0;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char	**tab;

	tab = NULL;
	tab = ft_calc_nbr_word(str, tab);
	tab = ft_calc_len_word(str, tab);
	tab = ft_fill_in(str, tab);
	return (tab);
}


