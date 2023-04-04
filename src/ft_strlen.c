/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:53:45 by lumorales         #+#    #+#             */
/*   Updated: 2023/03/20 13:36:37 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strlen(const char *str)
{
	int	counter;

	if (!str)
		return (0);
	counter = 0;
	while (str[counter] != 0)
		counter++;
	return (counter);
}
