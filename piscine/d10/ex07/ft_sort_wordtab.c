/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 21:16:33 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/16 13:22:22 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_wordtab(char **tab)
{
	int		cmp;
	char	*tmp;
	int		i;
	int		c;

	c = 0;
	i = 0;
	while (tab[i])
	{
		while (tab[c])
		{
			cmp = ft_strcmp(tab[i], tab[c]);
			if (cmp < 0 && i != c)
			{
				tmp = tab[i];
				tab[i] = tab[c];
				tab[c] = tmp;
			}
			c++;
		}
		c = 0;
		i++;
	}
}

/*
**int		main(int ac, char **av)
**{
**	char	**tab;
**	int		i;
**
**	i = 0;
**	tab = ft_split_whitespaces(av[1]);
**	ac = 0;
**	while (tab[i] != 0)
**	{
**		printf("%s \n", tab[i]);
**		i++;
**	}
**	ft_sort_wordtable(tab);
**	return (0);
**}
*/
