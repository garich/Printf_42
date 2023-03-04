/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarijo- <agarijo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 19:55:46 by agarijo-          #+#    #+#             */
/*   Updated: 2023/01/11 17:12:25 by agarijo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_isunsign(unsigned int u_nbr)
{
	int		u_nbr_length;

	u_nbr_length = 0;
	if (u_nbr == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	u_nbr_length = ft_putunbr_fd(u_nbr, 1);
	return (u_nbr_length);
}

int	ft_putunbr_fd(unsigned int n, int fd)
{
	int	sum;

	sum = 0;
	if (n > 9)
	{
		sum += ft_putunbr_fd(n / 10, fd);
		sum += ft_putunbr_fd(n % 10, fd);
	}
	else
	{
		ft_putchar_fd(n + 48, fd);
		return (1);
	}
	return (sum);
}
