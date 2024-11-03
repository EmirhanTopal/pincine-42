/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:56:23 by emtopal           #+#    #+#             */
/*   Updated: 2024/08/26 20:03:14 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	a;
	int	result;

	a = 1;
	result = 1;
	if (!(nb <= 2147483647 && nb >= 0))
		return (0);
	while (a <= nb)
	{
		result = a * result;
		a++;
	}
	return (result);
}
