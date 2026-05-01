/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/16 12:59:05 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/30 16:53:43 by dshcherb         ###   ########.fr       */
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
	if (!ft_isdigit(argv[i]) && argv[i])
		print_error();
	if ((sign == 1 && res > INT_MAX) || (sign == -1 && res < INT_MIN))
		print_error();
	return (res * sign);
}

static void	check_dup(char **argv, int start)
{
	int i;

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

int	is_flag(char **argv)
{
	int	i;
	int	count_flags;

	i = 0;
	count_flags = 0;
	while (argv[i])
	{
		if (ft_strncmp(argv[i], "--", 2) == 0)
			count_flags++;
		i++;
	}
	return (count_flags);
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
		tmp_argv = ft_split(argv[i], ' ');
	check_dup(tmp_argv, i);
	return (0);
}
