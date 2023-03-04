/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarijo- <agarijo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 12:47:21 by agarijo-          #+#    #+#             */
/*   Updated: 2023/03/03 19:32:58 by agarijo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_flag_fd(va_list *ptr, char flag)
{
	int	sum;

	sum = 0;
	if (flag == 'c')
		sum += ft_ischar(va_arg(*ptr, int), 0);
	if (flag == 'i' || flag == 'd')
		sum += ft_isnbr(va_arg(*ptr, int));
	if (flag == 's')
		sum += ft_isstr(va_arg(*ptr, char *));
	if (flag == '%')
		sum += ft_ischar(0, 1);
	if (flag == 'u')
		sum += ft_isunsign(va_arg(*ptr, unsigned int));
	if (flag == 'p')
		sum += ft_isptr(va_arg(*ptr, unsigned long));
	if (flag == 'x' || flag == 'X')
		sum += ft_ishexa(va_arg(*ptr, unsigned int), flag);
	return (sum);
}

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	ptr;

	va_start(ptr, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			count += ft_check_flag_fd(&ptr, *++format);
		else
		{
			ft_putchar_fd(*format, 1);
			count++;
		}
		format++;
	}
	va_end(ptr);
	return (count);
}
