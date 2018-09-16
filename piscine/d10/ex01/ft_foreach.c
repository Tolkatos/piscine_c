/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 10:39:01 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/16 10:56:43 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int		i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/*
** int		main(int argc, char **argv)
**{
**	int		tab[5] = {1, 2, 3, 4 ,5};
**
**	argc = 0;
**	ft_foreach(tab, atoi(argv[1]), &ft_putnbr);
**	return (0);
**}
*/
