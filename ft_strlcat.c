/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:38:15 by lumorales         #+#    #+#             */
/*   Updated: 2022/12/09 13:14:54 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dst_len;

	j = 0;
	src_len = 0;
	dst_len = 0;
	while (dst[dst_len])
		dst_len++;
	while (src[src_len])
		src_len++;
	i = dst_len;
	if (size <= dst_len)
		return (src_len + size);
	while (src[j] && j < size - dst_len - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (dst_len + src_len);
}
