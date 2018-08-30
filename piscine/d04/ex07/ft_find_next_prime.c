/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 18:56:32 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/30 08:56:04 by ranuytte         ###   ########.fr       */
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

int		ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb))
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}

/*
**int		main(void)
**{
**	printf("%d", ft_find_next_prime(5712));
**	return (0);
**}
*/
