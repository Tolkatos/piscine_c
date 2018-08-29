/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 09:56:56 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/28 12:03:09 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb2(void)
{
	char tab[2];

	tab[0] = 0;
	tab[1] = 1;
	while (tab[0] <= 98)
	{
		while (tab[1] <= 99)
		{
			ft_putchar(tab[0] / 10 + 48);
			ft_putchar(tab[0] % 10 + 48);
			ft_putchar(' ');
			ft_putchar(tab[1] / 10 + 48);
			ft_putchar(tab[1] % 10 + 48);
			if (!(tab[0] == 98 && tab[1] == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			tab[1]++;
		}
		tab[0]++;
		tab[1] = tab[0] + 1;
	}
}

/*
**int	main(void)
**{
**	ft_print_comb2();
**	return 0;
**}
*/
