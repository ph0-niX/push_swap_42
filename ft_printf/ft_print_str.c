/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 13:59:56 by dshcherb          #+#    #+#             */
/*   Updated: 2026/05/02 16:23:59 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_str(char *str, int fd)
{
	int	count;

	if (!str)
		return (write(fd, "(null)", 6));
	count = 0;
	while (*str)
	{
		print_char((int)*str, fd);
		count++;
		str++;
	}
	return (count);
}
