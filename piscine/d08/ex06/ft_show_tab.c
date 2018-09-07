/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 22:16:11 by ranuytte          #+#    #+#             */
/*   Updated: 2018/09/07 10:17:04 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	unsigned int	r;

	r = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		r = nb * - 1;
	}
	else
		r = nb;
	if (r > 9)
		ft_putnbr(r / 10);
	ft_putchar(r % 10 + 48);
}

void	ft_show_tab(struct s_stock_par *par)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].copy);
		ft_putchar('\n');
		i++;
	}
}
