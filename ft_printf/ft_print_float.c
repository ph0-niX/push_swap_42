/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_float.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 16:01:12 by iyazykov          #+#    #+#             */
/*   Updated: 2026/05/03 13:28:39 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_float(double n, int type, int fd)
{
	long int	int_part;
	long int	double_part;
	int			count;

	n = n * 100;
	count = 0;
	int_part = (long)n;
	double_part = (long)((n - (double)int_part) * 100);
	count += print_digit(int_part, type, fd);
	count += write(fd, ".", 1);
	if (double_part == 0)
		count += write(fd, "00", 2);
	else
		count += print_digit(double_part, type, fd);
	count += write(fd, "%", 1);
	return (count);
}
