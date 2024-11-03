/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 17:45:59 by emtopal           #+#    #+#             */
/*   Updated: 2024/08/27 18:21:13 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	mod;

	i = 2;
	mod = 1;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb == 3)
		return (1);
	while (i < nb)
	{
		mod = nb % i;
		if (mod == 0)
			return (0);
		else
			i++;
	}
	return (1);
}
