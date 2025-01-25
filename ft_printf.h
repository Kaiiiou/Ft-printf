/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kai-iou <kai-iou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 03:08:07 by amarti            #+#    #+#             */
/*   Updated: 2025/01/25 09:17:27 by kai-iou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

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

#endif
