/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarijo- <agarijo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 19:24:40 by agarijo-          #+#    #+#             */
/*   Updated: 2023/01/11 18:06:13 by agarijo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_isptr(unsigned long pointer)
{
	int		u_pointer_length;

	u_pointer_length = 0;
	if (pointer == 0)
	{
		u_pointer_length = ft_isstr("0x0");
		return (u_pointer_length);
	}
	u_pointer_length += ft_isstr("0x");
	u_pointer_length += ft_putptr_fd(pointer, 1);
	return (u_pointer_length);
}

int	ft_putptr_fd(unsigned long pointer, int fd)
{
	int	sum;

	sum = 0;
	if (pointer >= 16)
	{
		sum += ft_putptr_fd(pointer / 16, fd);
		pointer = pointer % 16;
	}
	if (pointer < 10)
		ft_putchar_fd(pointer + '0', fd);
	else
	{
		ft_putchar_fd(pointer - 10 + 'a', fd);
	}
	sum++;
	return (sum);
}
