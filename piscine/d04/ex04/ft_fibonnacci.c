/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonnacci.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 16:22:21 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/30 09:03:11 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonnaci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (index + ft_fibonnaci(index - 1));
}

/*
**int		main(void)
**{
**	printf("%d", ft_fibonnaci(6));
**	return (0);
**}
*/
