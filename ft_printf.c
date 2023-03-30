/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 13:33:01 by lumorale          #+#    #+#             */
/*   Updated: 2023/01/30 17:13:55 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	check_args(const char v, va_list args, int *counter)
{
	char	*str;

	if (v == 'c')
		ft_putchar_counter(va_arg(args, int), counter);
	if (v == 's')
		ft_putstr(va_arg(args, char *), counter);
	if (v == 'd' || v == 'i')
		str = ft_itoa(va_arg(args, int));
	if (v == 'u')
		str = ft_itoa_unsigned(va_arg(args, unsigned int));
	if (v == 'p')
	{
		ft_putstr("0x", counter);
		str = ft_hexa(va_arg(args, unsigned long), "0123456789abcdef");
	}
	if (v == 'X')
		str = ft_hexa(va_arg(args, unsigned int), "0123456789ABCDEF");
	if (v == 'x')
		str = ft_hexa(va_arg(args, unsigned int), "0123456789abcdef");
	if (v == 'd' || v == 'i' || v == 'u' || v == 'p' || v == 'x' || v == 'X')
	{
		ft_putstr(str, counter);
		free(str);
	}
}

int	ft_printf(char *str, ...)
{
	va_list	args;
	int		counter;
	size_t	i;

	va_start(args, str);
	if (write(1, "", 0) == -1)
		return (-1);
	i = 0;
	counter = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '%')
				ft_putchar_counter(str[i], &counter);
			else
				check_args(str[i], args, &counter);
		}
		else
			ft_putchar_counter(str[i], &counter);
		i++;
	}
	va_end(args);
	return (counter);
}
