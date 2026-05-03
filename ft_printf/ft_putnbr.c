/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:05:54 by dshcherb          #+#    #+#             */
/*   Updated: 2026/05/03 13:13:52 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(unsigned long n, int *count, int type, int fd)
{
	char			*symbols;
	unsigned long	base;

	if (type == 3)
		symbols = "0123456789ABCDEF";
	else if (type == 1)
		symbols = "0123456789";
	else
		symbols = "0123456789abcdef";
	if (type == 1)
		base = 10;
	else
		base = 16;
	if (n >= base)
		ft_putnbr(n / base, count, type, fd);
	*count += write(fd, &symbols[n % base], 1);
}

// int main(void)
// {
// 	int	count;

// 	count = 0;
// 	ft_putnbr(1133, 10, &count, 'i');
// 	return(0);
// }