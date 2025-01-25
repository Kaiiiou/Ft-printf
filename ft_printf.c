/* ************************************************************************** */
/*                                                                            */
/* ,,,                                                       :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarti <amarti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 04:34:31 by amarti            #+#    #+#             */
/*   Updated: 2025/01/25 00:58:02 by amarti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_signe(char signe, va_list ap)
{
	int count;

	count = 0;
	if (signe == 'c')
		count += print_char(va_arg(ap, int));
	else if (signe == 's')
		count += print_str(va_arg(ap, char *));
	else if (signe == 'd' || signe == 'i')
		count += print_nbr(va_arg(ap, int));
	
}

int ft_printf(const char *base, ...)
{
	int count;
	int i;

	i = 0;
	count = 0;
	va_list ap;
	va_start(ap, base);

	while(base[i])
	{
		if(base[i] == '%')
		{
		count += print_signe(base[i+1], ap);
		i++;
		}
		else
		{
		write(1, base[i], 1);
		count++;
		i++;
		}
	}
	va_end(ap);
	return(count);
}

int main()
{

}