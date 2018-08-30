/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ranuytte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 10:52:13 by ranuytte          #+#    #+#             */
/*   Updated: 2018/08/30 11:39:23 by ranuytte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int		i;
	int		s;
	int		r;

	i = 0;
	s = 1;
	r = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n' \
			|| str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		s = -1;
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r *= 10;
		r += str[i] - '0';
		i++;
	}
	return (r);
}
/*
**int		main(int argc, char **argv)
**{
**		argc = 0;
**		printf("%d", ft_atoi(argv[1]));
**		printf("%s", "\n");
**		printf("%d", atoi(argv[1]));
**		return (0);
**}
*/
