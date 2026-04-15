/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 11:41:15 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/31 18:28:33 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_format(char specifier, va_list ap)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(ap, int));
	else if (specifier == 's')
		count += print_str(va_arg(ap, char *));
	else if (specifier == 'u')
		count += print_unsigned(va_arg(ap, unsigned int));
	else if (specifier == 'd' || specifier == 'i')
		count += print_digit(va_arg(ap, int), 10, specifier);
	else if (specifier == 'x')
		count += print_digit(va_arg(ap, unsigned int), 16, specifier);
	else if (specifier == 'X')
		count += print_digit(va_arg(ap, unsigned int), 16, specifier);
	else if (specifier == 'p')
		count += print_pointer(va_arg(ap, uintptr_t));
	else if (specifier == '%')
		count += print_char('%');
	else
		count += write(1, &specifier, 1);
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		total;

	va_start(ap, format);
	i = 0;
	total = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			total += print_format(format[i], ap);
		}
		else
			total += write(1, &format[i], 1);
		i++;
	}
	va_end(ap);
	return (total);
}
// int main(void)
// {
// 	char 	*ptr = "ABC";
// 	int res = ft_printf( " %u %u\n", LONG_MAX, LONG_MIN);
// 	printf("%d\n", res);
// 	res = printf(" %u %u\n", LONG_MAX, LONG_MIN);
// 	printf("%d\n", res);
// 	return(0);
// }