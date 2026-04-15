/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:38:53 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/14 14:28:30 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init_info(t_Info *info)
{
	info->bench = 0;
	info->disorder = 0;
	info->error = 0;
	info->pa = 0;
	info->pb = 0;
	info->ra = 0;
	info->rb = 0;
	info->rr = 0;
	info->rra = 0;
	info->rrb = 0;
	info->rrr = 0;
	info->sa = 0;
	info->sb = 0;
	info->ss = 0;
	info->total_ops = 0;
	info->strategy = 3;
}

void	check_flags(char *argv, t_Info *info, int *st_count)
{
	if (ft_strncmp(argv, "--simple", 9) == 0)
	{
		info->strategy = 0;
		st_count++;
	}
	else if (ft_strncmp(argv, "--medium", 9) == 0)
	{
		info->strategy = 1;
		st_count++;
	}
	else if (ft_strncmp(argv, "--complex", 10) == 0)
	{
		info->strategy = 2;
		st_count++;
	}
	else if (ft_strncmp(argv, "--adaptive", 11) == 0)
	{
		info->strategy = 3;
		st_count++;
	}
	else if (ft_strncmp(argv, "--bench", 8) == 0)
		info->bench = 1;
	else if (ft_strncmp(argv, "--", 2) == 0)
		info->error += 1;
}

void	add_info(int argc, char **argv, t_Info *info)
{
	int	i;
	int	st_count;

	i = 1;
	st_count = 0;
	(void) argc;
	init_info(info);
	while (argv[i])
	{
		check_flags(argv[i], info, &st_count);
		i++;
	}
	if (st_count > 1)
		info->error += 1;
}
