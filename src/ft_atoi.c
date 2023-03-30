/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:15:10 by lumorales         #+#    #+#             */
/*   Updated: 2023/03/20 13:35:33 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_atoi(char *nptr)
{
	int	i;
	int	pol;
	int	toint;

	i = 0;
	pol = 1;
	toint = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
		pol = -1;
	if (nptr[i] == '+' || pol == -1)
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
		toint = toint * 10 + (nptr[i++] - 48);
	return (toint * pol);
}
