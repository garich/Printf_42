/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarijo- <agarijo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 18:35:05 by agarijo-          #+#    #+#             */
/*   Updated: 2023/01/11 17:53:41 by agarijo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ishexa(unsigned int hexa, char flag)
{
	int		u_hexa_length;

	u_hexa_length = 0;
	if (hexa == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	u_hexa_length = ft_puthexa_fd(hexa, flag, 1);
	return (u_hexa_length);
}

int	ft_puthexa_fd(unsigned int hexa, char flag, int fd)
{
	int	sum;

	sum = 0;
	if (hexa >= 16)
	{
		sum += ft_puthexa_fd(hexa / 16, flag, fd);
		hexa = hexa % 16;
	}
	if (hexa < 10)
		ft_putchar_fd(hexa + '0', fd);
	else
	{
		if (flag == 'X')
			ft_putchar_fd(hexa - 10 + 'A', fd);
		else
			ft_putchar_fd(hexa - 10 + 'a', fd);
	}
	sum++;
	return (sum);
}
