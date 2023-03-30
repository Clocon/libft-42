/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:49:48 by lumorale          #+#    #+#             */
/*   Updated: 2022/12/13 17:20:57 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_total_digits(long nb)
{
	size_t	counter;

	counter = 0;
	if (nb >= 0 && nb <= 9)
		return (1);
	else if (nb < 0)
	{
		counter++;
		nb *= -1;
	}
	while (nb > 0)
	{
		nb /= 10;
		counter++;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	long	nb;
	size_t	total;
	char	*hommer;

	nb = n;
	total = ft_total_digits(nb);
	hommer = ft_calloc(sizeof(char), total + 1);
	if (!hommer)
		return (0);
	hommer[total--] = 0;
	if (nb < 0)
	{
		hommer[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		hommer[0] = 48;
	while (nb > 0)
	{
		hommer[total] = (nb % 10) + 48;
		nb /= 10;
		total--;
	}
	return (hommer);
}
