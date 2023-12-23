/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ihajouji <ihajouji@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 17:17:56 by ihajouji          #+#    #+#             */
/*   Updated: 2023/12/23 00:40:25 by ihajouji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex_len(unsigned long long number)
{
	int	i;

	i = 0;
	if (number == 0)
		++i;
	while (number > 0)
	{
		++i;
		number /= 16;
	}
	return (i);
}

int	ft_puthex(unsigned long long number, char c)
{
	int	i;

	i = hex_len(number);
	if (number >= 16)
		ft_puthex(number / 16, c);
	number = number % 16;
	if (number >= 10)
		number = number + c - 10;
	else
		number = number + '0';
	ft_putchar(number);
	return (i);
}
/* int main ()
{
	int s3  = 1212;
	ft_printf("%d\n", ft_printf("%x", s3));
	printf("%d\n", printf("%x", s3));
} */