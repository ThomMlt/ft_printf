/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_count.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toto <toto@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:18:51 by toto              #+#    #+#             */
/*   Updated: 2024/11/17 21:07:24 by toto             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_count_int(int n, int *count)
{
	if (n == -2147483648)
	{
		(*count) += write(1, "-", 1);
		(*count) += write(1, "2", 1);
		n = 147483648;
	}
	if (n < 0)
	{
		(*count) += write(1, "-", 1);
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr_count_int(n / 10, count);
	n = (n % 10) + '0';
	(*count) += write(1, &n, 1);
}

void	ft_putnbr_count_long(long n, int *count)
{
	if (n < 0)
	{
		(*count) += write(1, "-", 1);
		n *= -1;
	}
	if (n >= 10)
		ft_putnbr_count_long(n / 10, count);
	n = (n % 10) + '0';
	(*count) += write(1, &n, 1);
}