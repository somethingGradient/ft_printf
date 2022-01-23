/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akitty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:57:13 by akitty            #+#    #+#             */
/*   Updated: 2021/11/17 13:57:14 by akitty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_s(char *str, const char **format, int *counter)
{
	if (!(str))
	{
		if (*(*format + 2) != '\0')
			*counter += ft_putstr_mode("(null)");
		else
		{
			ft_putstr_mode("(null)");
			*counter += 6;
		}
	}
	else
		*counter += ft_putstr_mode(str);
}
