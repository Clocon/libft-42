/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:21:43 by lumorale          #+#    #+#             */
/*   Updated: 2022/12/13 10:35:35 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*hommer;
	size_t	i;

	hommer = ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (!hommer)
		return (0);
	i = 0;
	while (s[i])
	{
		hommer[i] = f(i, s[i]);
		i++;
	}
	hommer[i] = 0;
	return (hommer);
}
