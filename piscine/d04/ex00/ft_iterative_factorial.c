/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 10:35:30 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/29 12:59:40 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		r;
	int		j;

	r = 1;
	j = 1;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	while (j <= nb)
	{
		r *= j;
		j++;
	}
	return (r);
}

/*
**int		main(void)
**{
**	ft_iterative_factorial(5);
**	return (0);
**}
*/
