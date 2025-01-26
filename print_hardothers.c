/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hardothers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 09:39:08 by kai-iou           #+#    #+#             */
/*   Updated: 2025/01/26 07:55:45 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexal(unsigned int n)
{
	char *dhex;
	int count;

	dhex = "0123456789abcdef";
	count = 0;

	if (n >= 16)
		count += print_hexal(n / 16);
	count += write(1, &dhex[n % 16], 1);	
	return (count);
}

int	print_hexau(unsigned int n)
{
	char *dhex;
	int count;

	dhex = "0123456789ABCDEF";
	count = 0;

	if (n >= 16)
		count += print_hexau(n / 16);
	count += write(1, &dhex[n % 16], 1);	
	return (count);
}

int	print_point(void *n)
{
	int count;
	unsigned long adresse;

	count = 0;
	adresse = (unsigned long)n;

	if(adresse == 0)
	{
		count += write(1, "(nil)", 5);
		return(count);
	}
	count += write(1, "0x", 2);
	count += print_hexalptr(adresse);
	return(count);
}

int	print_hexalptr(unsigned long n)
{
	char *dhex;
	int count;

	dhex = "0123456789abcdef";
	count = 0;

	if (n >= 16)
		count += print_hexalptr(n / 16);
	count += write(1, &dhex[n % 16], 1);	
	return (count);
}