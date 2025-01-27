/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 03:08:07 by amarti            #+#    #+#             */
/*   Updated: 2025/01/27 02:01:13 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>

int	print_signe(char signe, va_list ap);
int	ft_printf(const char *base, ...);
int	print_char(int c);
int	print_str(char *str);
int	print_nbr(int n);
int	print_unsigned(unsigned int n);
int	print_hexal(unsigned int n);
int	print_hexau(unsigned int n);
int	print_point(void *n);
int	print_hexalptr(unsigned long n);

#endif
