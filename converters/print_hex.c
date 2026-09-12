/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_hex.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yuhma <yuhma@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/08 21:29:05 by yuhma         #+#    #+#                 */
/*   Updated: 2026/04/08 21:36:36 by yuhma         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	print_hex(unsigned long n, int upper)
{
	char	*base;
	char	c;
	int		count;

	if (upper)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	count = 0;
	c = base[n % 16];
	if (n / 16)
		count += print_hex(n / 16, upper);
	count += print_char(c);
	return (count);
}
