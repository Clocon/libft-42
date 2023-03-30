/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:21:43 by lumorale          #+#    #+#             */
/*   Updated: 2023/03/20 13:45:59 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmapi(char *s, char (*f)(unsigned int, char))
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
