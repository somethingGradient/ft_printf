/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akitty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:57:03 by akitty            #+#    #+#             */
/*   Updated: 2021/11/17 13:57:07 by akitty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_print_p(size_t n, int mode)
{
	char	chars[6];
	int		counter;
	int		i;

	i = -1;
	while (++i < 6)
		chars[i] = 'a' + (i);
	chars[i + 1] = '\0';
	counter = 0;
	if (n >= 10 && n <= 15)
		counter += ft_putchar_mode(chars[n - 10], mode);
	else if (n >= 16)
	{
		counter += ft_print_p((n / 16), mode);
		counter += ft_print_p((n % 16), mode);
	}
	else
		counter += ft_putchar_mode(n + '0', mode);
	return (counter);
}
