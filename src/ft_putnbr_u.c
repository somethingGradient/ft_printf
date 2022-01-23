/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akitty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:58:02 by akitty            #+#    #+#             */
/*   Updated: 2021/11/17 13:58:03 by akitty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

unsigned int	ft_putnbr_u(unsigned int n)
{
	int	counter;

	counter = 0;
	if (n >= 10)
		counter += ft_putnbr_mode(n / 10);
	counter += ft_putchar_mode((n % 10) + '0', 0);
	return (counter);
}
