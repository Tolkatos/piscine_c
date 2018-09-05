/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 11:46:32 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/05 18:18:35 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_error(int nbr, char *base)
{
	int		i;
	int		y;

	i = 0;
	y = 1;
	nbr = 0;
	if (base[i] == '\0')
		return (0);
	while (base[i])
		i++;
	if (i == 1)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		while (base[i + y])
		{
			if (base[i] == base[i + y])
				return (0);
			y++;
		}
		y = 0;
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		i;
	int		rest;

	rest = 0;
	i = 0;
	if (ft_error(nbr, base))
			return ;
	while (base[i])
		i++;
	if (nbr > 0)
	{
		rest = nbr % i;
		ft_putnbr_base(nbr / i, base);
		if (i == 16 && rest > 9 && rest < 16)
		{
			ft_putchar(rest + '7');
		}
		else
			ft_putchar(rest + '0');
	}
}

int		main(int argc, char **argv)
{
	argc = 0;
	ft_putnbr_base(atoi(argv[1]), argv[2]);
	return (0);
}
