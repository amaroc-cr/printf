/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   handle_format.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: yuhma <yuhma@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/08 21:31:27 by yuhma         #+#    #+#                 */
/*   Updated: 2026/04/08 21:35:02 by yuhma         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_format(char c, va_list args)
{
	if (c == 'c')
		return (print_char(va_arg(args, int)));
	else if (c == 's')
		return (print_str(va_arg(args, char *)));
	else if (c == 'd' | c == 'i')
		return (print_int(va_arg(args, int)));
	else if (c == 'u')
		return (print_unsigned(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (print_hex(va_arg(args, unsigned int), 0));
	else if (c == 'X')
		return (print_hex(va_arg(args, unsigned int), 1));
	else if (c == 'p')
		return (print_ptr(va_arg(args, void *)));
	else if (c == '%')
		return (write(1, "%", 1));
	return (0);
}
