/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akitty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 14:59:04 by akitty            #+#    #+#             */
/*   Updated: 2021/11/17 14:59:06 by akitty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int				ft_printf(const char *format, ...);
int				ft_print_p(size_t n, int mode);
void			ft_print_s(char *str, const char **format, int *counter);
int				ft_putchar_mode(char c, int mode);
int				ft_putstr_mode(char *s);
int				ft_putnbr_base16(unsigned int n, int mode);
int				ft_putnbr_mode(int n);
unsigned int	ft_putnbr_u(unsigned int n);
int				ft_strlen(const char *str);
int				ft_tolower(int c);

#endif
