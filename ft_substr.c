/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:35:19 by lumorale          #+#    #+#             */
/*   Updated: 2022/12/09 13:15:43 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*hommer;
	size_t	i;

	if (!s)
		return (0);
	if ((size_t)start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	hommer = malloc(sizeof(char) * (len + 1));
	if (!hommer)
		return (0);
	i = 0;
	while (i < len)
	{
		hommer[i] = s[start + i];
		i++;
	}
	hommer[i] = 0;
	return (hommer);
}
