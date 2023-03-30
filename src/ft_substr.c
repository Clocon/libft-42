/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 12:35:19 by lumorale          #+#    #+#             */
/*   Updated: 2023/03/20 13:45:03 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_substr(char *s, int start, int len)
{
	char	*hommer;
	int		i;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
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
