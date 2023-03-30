/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:35:22 by lumorale          #+#    #+#             */
/*   Updated: 2023/03/20 13:32:25 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*hommer;

	hommer = malloc(nmemb * size);
	if (!hommer)
		return (0);
	ft_bzero(hommer, (nmemb * size));
	return (hommer);
}
