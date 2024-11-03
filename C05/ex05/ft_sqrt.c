/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 15:37:49 by emtopal           #+#    #+#             */
/*   Updated: 2024/08/27 17:43:46 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	while (result < nb)
	{
		if ((i * i) > nb)
			return (0);
		result = i * i;
		i++;
	}
	return (i - 1);
}
