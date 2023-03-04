/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agarijo- <agarijo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 17:47:19 by agarijo-          #+#    #+#             */
/*   Updated: 2023/01/11 17:58:30 by agarijo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

// FT_ISNBR (INT NBR) //
// recives as parameter an int that is variadic. Calls ft_putnbr_fd 
// using this parameter to print it and then calls ft_itoa and ft_strlen
// to return the length of the number to addup to the ft_printf output 
// counter.
int	ft_isnbr(int nbr);
int	ft_isstr(char *string);
int	ft_isunsign(unsigned int u_nbr);
int	ft_ishexa(unsigned int hexa, char flag);
int	ft_ischar(int value, int percent_flag);
int	ft_isptr(unsigned long pointer);
int	ft_puthexa_fd(unsigned int hexa, char flag, int fd);
int	ft_putunbr_fd(unsigned int n, int fd);
int	ft_putptr_fd(unsigned long pointer, int fd);
int	ft_check_flag_fd(va_list *ptr, char flag);
int	ft_printf(const char *format, ...);

#endif
