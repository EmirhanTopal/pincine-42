/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 19:25:22 by emtopal           #+#    #+#             */
/*   Updated: 2024/08/26 20:14:48 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	result;
	int	sign;

	i = 1;
	result = 1;
	sign = 1;
	if (power < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (1 <= power)
	{
		result *= nb;
		power--;
	}
	return (sign * result);
}
