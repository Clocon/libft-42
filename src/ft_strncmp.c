/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 14:00:21 by lumorale          #+#    #+#             */
/*   Updated: 2023/03/20 13:39:40 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
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
