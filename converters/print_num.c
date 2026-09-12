/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_num.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: yuhma <yuhma@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2026/04/08 21:29:08 by yuhma         #+#    #+#                 */
/*   Updated: 2026/04/08 21:36:22 by yuhma         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int(int num)
{
	long	n;
	char	c;
	int		count;

	count = 0;
	n = num;
	if (n < 0)
	{
		count += print_char('-');
		n *= -1;
	}
	c = (n % 10) + '0';
	if (n / 10)
		count += print_int(n / 10);
	count += print_char(c);
	return (count);
}

int	print_unsigned(unsigned int n)
{
	char	c;
	int		count;

	count = 0;
	c = (n % 10) + '0';
	if (n / 10)
		count += print_unsigned(n / 10);
	count += print_char(c);
	return (count);
}
