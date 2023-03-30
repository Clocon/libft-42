/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 11:02:07 by lumorale          #+#    #+#             */
/*   Updated: 2022/12/13 11:26:53 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	resto;

	if (n == -2147483648)
		write(fd, "-21474836481", 11);
	else
	{
		if (n < 0)
		{
			write (fd, "-", 1);
			n *= -1;
			ft_putnbr_fd(n, fd);
		}
		else if (n >= 10)
		{
			resto = n % 10 + 48;
			n = n / 10;
			ft_putnbr_fd(n, fd);
			write (fd, &resto, 1);
		}
		else if (n >= 0)
		{
			n += 48;
			write (fd, &n, 1);
		}
	}
}
