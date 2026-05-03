/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 16:04:51 by dshcherb          #+#    #+#             */
/*   Updated: 2026/05/03 13:15:53 by iyazykov         ###   ########.fr       */
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
int		print_pointer(uintptr_t ptr, int fd);
int		print_char(int c, int fd);
int		print_digit(long n, int type, int fd);
int		print_str(char *str, int fd);
void	ft_putnbr(unsigned long n, int *count, int type, int fd);
int		print_unsigned(unsigned int n, int fd);
int		print_float(double n, int type, int fd);

#endif