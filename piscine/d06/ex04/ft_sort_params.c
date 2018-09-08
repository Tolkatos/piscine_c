/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 13:27:16 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/08 15:58:41 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	ft_strcmp(char *s1, char *s2);

int		main(int argc, char **argv)
{
	int		i;
	char	cmp;
	char	tmp;

	i = 1;
	cmp = 0;
	tmp = 0;
	while (i < argc - 1)
	{
		cmp = ft_strcmp(argv[i], argv[i + 1]);
		if (cmp == 0 || cmp < 0)
			i++;
		else	
		{
			tmp = *argv[i];
			*argv[i] = *argv[i + 1];
			*argv[i + 1] = tmp;
			i++;
		}
	}
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}		
	return (0);
}

