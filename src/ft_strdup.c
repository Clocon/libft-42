/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:46:17 by lumorale          #+#    #+#             */
/*   Updated: 2023/03/20 13:40:31 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strdup(char *s)
{
	char	*hommer;
	size_t	i;

	hommer = malloc(ft_strlen(s) + 1);
	if (!hommer)
		return (0);
	i = 0;
	while (s[i])
	{
		hommer[i] = (char)s[i];
		i++;
	}
	hommer[i] = 0;
	return (hommer);
}
