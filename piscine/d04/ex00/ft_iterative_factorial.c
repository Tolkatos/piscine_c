/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 10:35:30 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/29 10:57:07 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		i;
	int		j;

	i = 1;
	j = 1;
	if (nb <= 0)
		return (0);
	while (j <= nb)
	{
		i *= j;
		j++;
	}
	return (i);
}

/*
**int		main(void)
**{
**	ft_iterative_factorial(5);
**	return (0);
**}
*/
