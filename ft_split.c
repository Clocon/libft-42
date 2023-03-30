/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splitB.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:14:40 by lumorale          #+#    #+#             */
/*   Updated: 2022/12/13 16:33:31 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	word_counter(const char *str, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i++] != c && (str[i] == c || !str[i]))
			j++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**hommer;
	size_t	len;
	size_t	i;

	hommer = malloc(sizeof(char *) * (word_counter(s, c) + 1));
	if (!hommer)
		return (0);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c)
			{
				len++;
				s++;
			}
			hommer[i++] = ft_substr(s - len, 0, len);
		}
		else
			s++;
	}
	hommer[i] = 0;
	return (hommer);
}
