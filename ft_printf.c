/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akitty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:58:49 by akitty            #+#    #+#             */
/*   Updated: 2021/11/17 13:58:50 by akitty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

void	main_write(va_list *p, const char **format, int *counter)
{	
	if (*(*format + 1) == 'c')
		*counter += ft_putchar_mode(va_arg(*p, int), 0);
	else if (*(*format + 1) == 's')
		ft_print_s(va_arg(*p, char *), format, counter);
	else if (*(*format + 1) == 'p')
	{
		ft_putstr_mode("0x");
		*counter += 2 + ft_print_p(va_arg(*p, size_t), 1);
	}
	else if (*(*format + 1) == 'd' || *(*format + 1) == 'i')
		*counter += ft_putnbr_mode(va_arg(*p, int));
	else if (*(*format + 1) == 'u')
		*counter += ft_putnbr_u(va_arg(*p, int));
	else if (*(*format + 1) == 'x')
		*counter += ft_putnbr_base16(va_arg(*p, int), 1);
	else if (*(*format + 1) == 'X')
		*counter += ft_putnbr_base16(va_arg(*p, int), 0);
	else if (*(*format + 1) == '%')
		*counter += ft_putchar_mode('%', 0);
}

int	ft_printf(const char *format, ...)
{
	va_list	p_args;
	int		counter;

	va_start(p_args, format);
	counter = 0;
	if (!format || !ft_strlen(format))
		return (-1);
	while (*format)
	{
		if (*format == '\n')
			counter += ft_putchar_mode('\n', 0);
		else if (*format == '%')
		{
			main_write(&p_args, &format, &counter);
			format++;
		}
		else
			counter += ft_putchar_mode(*format, 0);
		format++;
	}
	va_end(p_args);
	return (counter);
}
#include <stdio.h>
int main(void)
{
	// printf("%s %s", "ALLO");
	ft_printf("%s %s", "ALLO");
	return (0);
}