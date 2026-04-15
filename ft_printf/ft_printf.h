/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 16:04:51 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/31 17:44:28 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdbool.h>
# include <unistd.h>
# include <limits.h>
# include <stdint.h>

int		ft_printf(const char *format, ...);
int		print_pointer(uintptr_t ptr);
int		print_char(int c);
int		print_digit(long n, int base, char type);
int		print_str(char *str);
void	ft_putnbr(unsigned long n, unsigned int base, int *count, char type);
int		print_unsigned(unsigned int n);

#endif