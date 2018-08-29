/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 10:20:41 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/28 11:33:34 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int i;

	i = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		i = nb * -1;
	}
	else
	{
		i = nb;
	}
	if (i > 9)
	{
		ft_putnbr(i / 10);
	}
	ft_putchar(i % 10 + 48);
}

/*
**int	main(void)
**{
**	ft_putnbr(-2147483648);
**	return 0;
**}
*/
