/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:51:17 by emtopal           #+#    #+#             */
/*   Updated: 2024/08/21 14:34:20 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_value(int a)
{
	char	n_2;
	char	n_1;

	n_1 = '0' + (a / 10);
	n_2 = '0' + (a % 10);
	write(1, &n_1, 1);
	write(1, &n_2, 1);
}

void	ft_print_comb2(void)
{
	int		first;
	int		second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			ft_value(first);
			write (1, " ", 1);
			ft_value(second);
			if (first != 98 || second != 99)
			{
				write (1, ", ", 2);
			}
			second++;
		}
		first++;
	}
}
