/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_str.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yuhma <yuhma@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/08 21:31:16 by yuhma         #+#    #+#                 */
/*   Updated: 2026/04/22 17:05:51 by yuhma         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *s)
{
	int	count;

	if (!s)
		return (write(1, "(null)", 6));
	count = 0;
	while (*s)
		count += (write(1, s++, 1));
	return (count);
}
