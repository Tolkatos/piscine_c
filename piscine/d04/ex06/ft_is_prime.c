/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 18:26:36 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/30 08:58:32 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb)
	{
		if (nb % i == 0 && nb != i)
			return (0);
		i++;
	}
	return (1);
}

/*
**int		main(void)
**{
**	printf("%d", ft_is_prime(30122));
**	return (0);
**}
*/
