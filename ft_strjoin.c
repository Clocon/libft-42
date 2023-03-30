/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 11:17:02 by lumorale          #+#    #+#             */
/*   Updated: 2022/12/09 13:14:48 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*hommer;
	size_t	s1len;
	size_t	s2len;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	hommer = malloc(sizeof(char) * (s1len + s2len + 1));
	if (!hommer)
		return (0);
	ft_memcpy(hommer, s1, s1len);
	ft_memcpy(&hommer[s1len], s2, s2len);
	hommer[s1len + s2len] = 0;
	return (hommer);
}
