/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:59:40 by lumorale          #+#    #+#             */
/*   Updated: 2023/03/20 13:29:35 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*hommer;

	hommer = malloc(sizeof(t_list));
	if (!hommer)
		return (0);
	hommer->content = content;
	hommer->next = 0;
	return (hommer);
}
