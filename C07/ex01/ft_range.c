/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 13:57:13 by emtopal           #+#    #+#             */
/*   Updated: 2024/08/31 15:36:25 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*storage;
	int	i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	storage = (int *) malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		storage[i] = min;
		min++;
		i++;
	}
	return (storage);
}
