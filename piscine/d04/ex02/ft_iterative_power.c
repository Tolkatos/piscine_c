/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 13:04:55 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/30 09:07:22 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		i;
	int		r;

	r = 1;
	i = 1;
	if (power < 0)
		return (0);
	while (i <= power)
	{
		r *= nb;
		i++;
	}
	printf("%d", r);
	return (r);
}

/*
**int		main(void)
**{
**	ft_iterative_power(4, -1);
**	return (0);
**}
*/
