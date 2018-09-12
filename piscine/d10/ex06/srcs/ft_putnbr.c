/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 10:32:18 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/30 10:50:41 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int	r;

	r = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		r = nb * -1;
	}
	else
		r = nb;
	if (r > 9)
		ft_putnbr(r / 10);
	ft_putchar(r % 10 + 48);
}

/*
**int		main(void)
**{
**	ft_putnbr(INT_MIN);
**	return (0);
**}
*/
