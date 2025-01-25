/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_others.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 04:12:26 by amarti            #+#    #+#             */
/*   Updated: 2025/01/25 07:40:43 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_char(int c)
{
	write(1, &c, 1);
	return (1);
}

int	print_str(char *str)
{
	int i;

	i = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	if (str[i])
	{
		write(1, str[i], 1);
		i++;
	}
	return (i);
}
void	print_nbr(int n)
{
	int count;

	count = 0;
	
	if (n == -2147483648)
	{
		print_str ("-2147483648");
	}
	else if (n < 0)
	{
		print_char ('-');
		print_nbr (-n);
	}
	else if (n >= 10)
	{
		print_nbr (n / 10);
		print_char((n % 10) + '0');
	}
	else
	{
		print_char (n + '0');
	}
}
