/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:31:16 by emtopal           #+#    #+#             */
/*   Updated: 2024/08/28 19:19:06 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_symbol(char *str, int i)
{
	if (((str[i - 1] >= 32 && str[i - 1] <= 47)
			|| (str[i - 1] >= 58 && str[i - 1] <= 64)
			|| (str[i - 1] >= 91 && str[i - 1] <= 96)
			|| (str[i - 1] >= 123 && str[i - 1] <= 127)))
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
			i++;
		}
	}
}

void	ft_upper(char *str, int i)
{
	if (i > 0 && ((str[i - 1] >= 65 && str[i - 1] <= 90)
			|| (str[i - 1] >= 97 && str[i - 1] <= 122)))
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
	}
}

void	ft_lower(char *str, int i)
{
	if (str[i - 1] >= 97 && str[i - 1] <= 122)
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		else if ((str[i - 1] >= 32 && str[i - 1] <= 47)
			|| (str[i - 1] >= 123 && str[i - 1] <= 127))
		{
			i++;
		}
	}
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 1;
	if (str[0] == '\0')
		return (str);
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	if (str[1] >= 65 && str[1] <= 90)
		str[1] += 32;
	while (str[i - 1] != '\0')
	{
		ft_symbol (str, i);
		ft_upper (str, i);
		ft_lower (str, i);
		i++;
	}
	return (str);
}
