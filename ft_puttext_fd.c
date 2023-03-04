/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puttext_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarijo- <agarijo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:05:43 by agarijo-          #+#    #+#             */
/*   Updated: 2023/01/11 18:49:34 by agarijo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ischar(int value, int percent_flag)
{
	if (!percent_flag)
		ft_putchar_fd(value, 1);
	else
		ft_putchar_fd('%', 1);
	return (1);
}

int	ft_isstr(char *string)
{
	int	size;

	size = 0;
	if (!string)
	{
		ft_putstr_fd("(null)", 1);
		size = 6;
	}
	else
	{
		size = ft_strlen(string);
		ft_putstr_fd(string, 1);
	}
	return (size);
}
