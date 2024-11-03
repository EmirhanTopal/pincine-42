/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 19:24:10 by emtopal           #+#    #+#             */
/*   Updated: 2024/09/01 13:43:08 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_len(char **str, int size)
{
	int		i;
	int		j;
	int		count;

	i = 0;
	j = 0;
	count = 0;
	while (i < size)
	{
		count += ft_strlen(str[i]);
		i++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*new_arr;
	int		i;
	int		j;
	int		na;
	int		sp;

	i = 0;
	j = 0;
	na = 0;
	sp = 0;
	new_arr = (char *) malloc(ft_len(strs, size) + ft_strlen(sep) + 1);
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			new_arr[na++] = strs[i][j++];
		sp = 0;
		while (sep[sp] != '\0' && i < size - 1)
			new_arr[na++] = sep[sp++];
		i++;
	}
	new_arr[na] = '\0';
	return (new_arr);
}
