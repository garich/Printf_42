/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarijo- <agarijo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 17:15:55 by agarijo-          #+#    #+#             */
/*   Updated: 2023/01/11 17:33:17 by agarijo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_isnbr(int nbr)
{
	char	*number;
	int		nbr_length;

	ft_putnbr_fd(nbr, 1);
	number = ft_itoa(nbr);
	nbr_length = ft_strlen(number);
	free(number);
	return (nbr_length);
}
