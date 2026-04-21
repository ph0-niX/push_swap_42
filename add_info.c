/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:38:53 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/17 13:40:52 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init_info(t_Info *info)
{
	info->bench = 0;
	info->disorder = 0;
	info->strategy = 3;
}

static void	change_strat(t_Info *info, int strat_num, int *st_count)
{
	info->strategy = strat_num;
	*st_count += 1;
}

static void	check_flags(char *argv, t_Info *info, int *st_count, int *bench_count)
{
	if (ft_strncmp(argv, "--simple", 9) == 0)
		change_strat(info, 0, st_count);
	else if (ft_strncmp(argv, "--medium", 9) == 0)
		change_strat(info, 1, st_count);
	else if (ft_strncmp(argv, "--complex", 10) == 0)
		change_strat(info, 2, st_count);
	else if (ft_strncmp(argv, "--adaptive", 11) == 0)
		change_strat(info, 3, st_count);
	else if (ft_strncmp(argv, "--bench", 8) == 0)
	{
		info->bench = 1;
		*bench_count += 1;
	}
	else if (ft_strncmp(argv, "--", 2) == 0)
		print_error();
}

void	add_info(char **argv, t_Info *info)
{
	int	i;
	int	st_count;
	int	bench_count;

	i = 1;
	st_count = 0;
	bench_count = 0;
	init_info(info);
	while (argv[i])
	{
		check_flags(argv[i], info, &st_count, &bench_count);
		i++;
	}
	if (bench_count > 1 || st_count > 1)
		print_error();
}
