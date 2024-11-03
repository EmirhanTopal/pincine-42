/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 17:47:34 by emtopal           #+#    #+#             */
/*   Updated: 2024/08/21 17:21:48 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	new_number;
	int	index;
	int	end_count;

	index = 0;
	end_count = size / 2;
	while (index < end_count)
	{
		new_number = tab[index];
		tab[index] = tab[size - index - 1];
		tab[size - index - 1] = new_number;
		index++;
	}
}
