/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:59:05 by dshcherb          #+#    #+#             */
/*   Updated: 2026/05/03 14:40:56 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long	ft_atol(char *argv)
{
	int		sign;
	long	res;
	int		i;

	sign = 1;
	res = 0;
	i = 0;
	while (ft_isspace(argv[i]))
		i++;
	sign = check_sign(argv[i]);
	if (sign == -1)
		i++;
	while (argv[i] >= '0' && argv[i] <= '9')
	{
		res = res * 10 + (argv[i] - '0');
		i++;
	}
	if (!ft_isdigit(argv[i]) && argv[i])
		print_error();
	res = res * sign;
	if ((sign == 1 && res > INT_MAX) || (sign == -1 && res < INT_MIN))
		print_error();
	return (res);
}

static void	check_dup(char **argv, int start)
{
	int	i;

	i = start;
	while (argv[start])
	{
		while (argv[i])
		{
			if (ft_atol(argv[start]) == ft_atoi(argv[i]) && i != start)
				print_error();
			i++;
		}
		start++;
		i = start;
	}
}

//Validation check for input and duplicates
int	check_input(char **argv, int argc)
{
	int		i;
	long	num;
	int		count_flags;
	char	**tmp_argv;

	i = 1;
	num = 0;
	if (argc <= 1)
		exit (0);
	count_flags = is_flag(argv);
	i += count_flags;
	if (argv[i] == NULL)
		return (0);
	tmp_argv = argv;
	if ((argc - 1 - count_flags) == 1)
	{
		tmp_argv = ft_split(argv[i], ' ');
		i = 0;
	}
	check_dup(tmp_argv, i);
	return (0);
}
