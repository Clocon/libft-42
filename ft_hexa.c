/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:41:51 by lumorale          #+#    #+#             */
/*   Updated: 2023/01/30 17:06:48 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_size(unsigned long nb)
{
	int	total;

	total = 0;
	if (nb >= 0 && nb <= 15)
		return (1);
	else if (nb < 0)
		nb *= -1;
	while (nb > 0)
	{
		nb /= 16;
		total++;
	}
	return (total);
}

char	*ft_hexa(unsigned long nb, char *hexa)
{
	char			*result;
	int				i;

	i = ft_size(nb);
	result = malloc(sizeof(char) * i + 1);
	if (!result)
		return (0);
	result[i--] = 0;
	if (nb < 0)
		nb *= -1;
	if (nb == 0)
		result[0] = hexa[0];
	while (nb > 0)
	{
		result[i] = hexa[nb % 16];
		nb /= 16;
		i--;
	}
	return (result);
}
