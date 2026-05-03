/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 11:41:15 by dshcherb          #+#    #+#             */
/*   Updated: 2026/05/03 13:29:02 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_format(char specifier, va_list ap, int fd)
{
	int	count;

	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(ap, int), fd);
	else if (specifier == 's')
		count += print_str(va_arg(ap, char *), fd);
	else if (specifier == 'u')
		count += print_unsigned(va_arg(ap, unsigned int), fd);
	else if (specifier == 'd' || specifier == 'i')
		count += print_digit(va_arg(ap, int), 1, fd);
	else if (specifier == 'f')
		count += print_float(va_arg(ap, double), 1, fd);
	else if (specifier == 'x')
		count += print_digit(va_arg(ap, unsigned int), 2, fd);
	else if (specifier == 'X')
		count += print_digit(va_arg(ap, unsigned int), 3, fd);
	else if (specifier == 'p')
		count += print_pointer(va_arg(ap, uintptr_t), fd);
	else if (specifier == '%')
		count += print_char('%', fd);
	else
		count += write(fd, &specifier, 1);
	return (count);
}

int	chek_fd(char c)
{
	if (c == '~')
		return (2);
	return (1);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		i;
	int		total;
	int		fd;

	va_start(ap, format);
	i = 0;
	total = 0;
	fd = chek_fd(format[0]);
	if (fd == 2)
		i++;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			total += print_format(format[i], ap, fd);
		}
		else
			total += write(fd, &format[i], 1);
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