/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:59:05 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/21 13:09:32 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

void	print_error(void)
{
	write(2, "Error\n", 7);
	exit(1);
}

static long	ft_atol(char *argv)
{
	int	sign;
	long	res;
	int	i;

	sign = 1;
	res = 0;
	i = 0;
	while (ft_isspace(argv[i]))
		i++;
	if (argv[i] == '+' || argv[i] == '-')
	{
		if (argv[i] == '-')
			sign = -1;
		i++;
	}
	while (argv[i] >= '0' && argv[i] <= '9')
	{
		res = res * 10 + (argv[i] - '0');
		i++;
	}
	if ((sign == 1 && res > INT_MAX) || (sign == -1 && res < INT_MIN))
		print_error();
	return (res * sign);
}

static void	check_dup(int num, char **argv)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (num == ft_atoi(argv[i]))
			print_error();
		i++;
	}
}

//Validation check for input and duplicates
int	check_input(char **argv)
{
	int		i;
	long	num;

	i = 1;
	num = 0;
	while (argv[i] && ft_strncmp(argv[i], "--", 2) == 0)
		i++;	
	if (argv[i] == NULL)
		return (0);
	while (argv[i])
	{
		num = ft_atol(argv[i]);
		check_dup(num, &argv[i]);
		i++;
	}
	return (0);
}
