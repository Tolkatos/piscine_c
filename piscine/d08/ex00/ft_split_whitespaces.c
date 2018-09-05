/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 17:34:03 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/05 18:02:45 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
char	**ft_calc_nbr_word(char *str, char **tab)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while(str[i])
	{
		if (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
			i++;
		else
		{
			while(str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i])
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
				j++;
			}
			tab[k] = (char*)malloc(sizeof(*tab) * (j + 1));
			if (tab[k] == NULL)
				return (0);
			k++;
			j = 0;
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
		if (str[i] == '\n' || str[i] == '\t' || str[i] == ' ')
			i++;
		else
		{
			while (str[i] != '\n' && str[i] != '\t' && str[i] != ' ' && str[i])
			{
				tab[j][k] = str[i];
				k++;
				i++;
			}
			tab[j][k + 1] = '\0';
			j++;
			k = 0;
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































