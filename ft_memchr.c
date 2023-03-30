/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:16:28 by lumorale          #+#    #+#             */
/*   Updated: 2022/12/05 12:16:28 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*s2;

	s2 = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s2[i] == (unsigned char)c)
			return ((void *)s2 + i);
		i++;
	}
	return (0);
}
