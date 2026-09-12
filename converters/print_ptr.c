/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_ptr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yuhma <yuhma@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/08 21:31:14 by yuhma         #+#    #+#                 */
/*   Updated: 2026/04/22 16:49:16 by yuhma         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_ptr(void *p)
{
	int				count;
	unsigned long	n;

	if (!p)
		return (write(1, "(nil)", 5));
	n = (unsigned long)p;
	count = 0;
	count += write(1, "0x", 2);
	count += print_hex(n, 0);
	return (count);
}
