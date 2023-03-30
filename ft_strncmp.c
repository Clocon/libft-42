/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:00:21 by lumorale          #+#    #+#             */
/*   Updated: 2022/12/13 13:37:01 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		end;

	i = 0;
	end = 0;
	while (end == 0 && (s2[i] || s1[i]) && i < n)
	{
		end = (unsigned char)s1[i] - (unsigned char)s2[i];
		i++;
	}	
	return (end);
}
