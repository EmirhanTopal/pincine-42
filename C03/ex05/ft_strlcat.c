/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtopal <emtopal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 01:36:49 by emtopal           #+#    #+#             */
/*   Updated: 2024/08/26 15:02:40 by emtopal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_len;

	i = 0;
	j = 0;
	src_len = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[src_len] != '\0')
	{
		src_len ++;
	}
	if (size <= i)
		return (i + src_len);
	while (src[j] != '\0' && ((i + j) < size - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + src_len);
}
