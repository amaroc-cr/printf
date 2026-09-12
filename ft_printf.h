/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yuhma <yuhma@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/08 21:31:24 by yuhma         #+#    #+#                 */
/*   Updated: 2026/04/08 21:34:03 by yuhma         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	handle_format(char c, va_list args);
int	print_char(char c);
int	print_str(char *s);
int	print_int(int num);
int	print_unsigned(unsigned int n);
int	print_hex(unsigned long n, int upper);
int	print_ptr(void *p);

#endif