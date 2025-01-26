/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_others.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 04:12:26 by amarti            #+#    #+#             */
/*   Updated: 2025/01/26 09:33:00 by amarti           ###   ########.fr       */
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
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	print_nbr(int n)
{
	int count;

	count = 0;
	if (n == -2147483648)
	{
		return(print_str("-2147483648"));
	}
	else if (n < 0)
	{
		count += print_char ('-');
		n = -n;
	}
	else if (n >= 10)
	{
		count += print_nbr(n / 10);
		count += print_char((n % 10) + '0');
	}
	else
	{
		count += print_char(n + '0');
	}
	return (count);
}

int	print_unsigned(unsigned int n)
{
	int	count;

	count = 0;
	if (n >= 10)
	{
		count += print_unsigned(n / 10);
		count += print_char((n % 10) + '0');
	}
	else
	{
		count += print_char(n + '0');
	}
	return (count);
}