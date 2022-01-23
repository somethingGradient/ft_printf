/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akitty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:04:41 by akitty            #+#    #+#             */
/*   Updated: 2021/11/17 13:57:55 by akitty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_putnbr_mode(int n)
{
	int	counter;

	counter = 0;
	if (n <= -2147483648)
		counter += ft_putstr_mode("-2147483648");
	else if (n >= 2147483647)
		counter += ft_putstr_mode("2147483647");
	else
	{
		if (n < 0)
		{
			counter += ft_putchar_mode('-', 0);
			n *= -1;
		}
		if (n >= 10)
			counter += ft_putnbr_mode(n / 10);
		counter += ft_putchar_mode((n % 10) + '0', 0);
	}
	return (counter);
}
