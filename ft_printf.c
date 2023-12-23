/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 08:32:39 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/23 02:49:39 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>

static int	format(va_list args, char c)
{
	int	printf_length;

	printf_length = 0;
	if (c == 'c')
		printf_length += ft_putchar(va_arg(args, int));
	else if (c == 's')
		printf_length += ft_putstr(va_arg(args, char *));
	else if (c == 'd' || c == 'i')
		printf_length += ft_putnbr(va_arg(args, int));
	else if (c == 'u')
		printf_length += ft_putnbr_u(va_arg(args, unsigned int));
	else if (c == 'x')
		printf_length += ft_puthex(va_arg(args, unsigned int), 'a');
	else if (c == 'X')
		printf_length += ft_puthex(va_arg(args, unsigned int), 'A');
	else if (c == '%')
		printf_length += ft_putchar('%');
	else if (c == 'p')
	{
		printf_length += ft_putstr("0x");
		printf_length += ft_puthex(va_arg(args, unsigned long long), 'a');
	}
	return (printf_length);
}

int	ft_printf(const char *str, ...)
{
	int				i;
	va_list			args;
	unsigned int	printf_length;

	i = 0;
	printf_length = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			printf_length += format(args, str[i + 1]);
			i++;
		}
		else
		{
			printf_length += ft_putchar(str[i]);
		}
		++i;
	}
	va_end(args);
	return (printf_length);
}
