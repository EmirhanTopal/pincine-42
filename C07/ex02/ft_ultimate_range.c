/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 14:32:25 by emtopal           #+#    #+#             */
/*   Updated: 2024/08/31 14:59:24 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*ineer_array;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	ineer_array = (int *) malloc(sizeof(int) * (max - min));
	if (ineer_array == NULL)
		return (-1);
	while (min < max)
	{
		ineer_array[i] = min;
		min++;
		i++;
	}
	range[0] = ineer_array;
	return (i);
}
