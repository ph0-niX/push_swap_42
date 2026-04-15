/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 14:05:54 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/14 16:51:16 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(unsigned long n, unsigned int base, int *count, char type)
{
	char	*symbols;

	if (base == 10)
		symbols = "0123456789";
	else
	{
		if (type == 'X')
			symbols = "0123456789ABCDEF";
		else
			symbols = "0123456789abcdef";
	}
	if (n >= base)
		ft_putnbr(n / base, base, count, type);
	*count += write(1, &symbols[n % base], 1);
}

// int main(void)
// {
// 	int	count;

// 	count = 0;
// 	ft_putnbr(1133, 10, &count, 'i');
// 	return(0);
// }