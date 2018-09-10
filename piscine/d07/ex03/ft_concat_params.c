/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 14:53:17 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/10 13:02:08 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		calc_len_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		r;

	r = 0;
	i = 0;
	j = 0;
	while (i < argc - 1)
	{
		i++;
		while (argv[i][j++])
			r++;
		j = 0;
	}
	return (r);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*r;
	int		k;

	k = 0;
	r = 0;
	j = 0;
	i = calc_len_params(argc, argv);
	r = (char*)malloc(sizeof(*r) * (i + argc));
	i = 0;
	while (j < argc - 1)
	{
		j++;
		while (argv[j][i])
			r[k++] = argv[j][i++];
		i = 0;
		if (i < argc - 1)
			r[k] = '\n';
		else
			r[k] = '\0';
		k++;
	}
	return (r);
}
/*
**int		main(int argc, char **argv)
**{
**	printf("%s", ft_concat_params(argc, argv));
**	return (0);
**}
*/
