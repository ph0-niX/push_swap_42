/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 13:46:51 by iyazykov          #+#    #+#             */
/*   Updated: 2026/05/05 12:28:20 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*take_algorhitm_complexity(int strat)
{
	if (strat == 1)
		return ("Adaptive / O(n²)");
	else if (strat == 2)
		return ("Adaptive / O(n√n)");
	else
		return ("Adaptive / O(n log n)");
}

char	*take_strat_for_bench(int start, int adapt_strat)
{
	if (start == 0)
		return ("Simple / O(n²)");
	else if (start == 1)
		return ("Medium / O(n√n)");
	else if (start == 2)
		return ("Complex / O(n log n)");
	else
		return (take_algorhitm_complexity(adapt_strat));
}

void	bench(t_Info *info, t_Count_op *count_op)
{
	char	*str_strat;

	str_strat = take_strat_for_bench(info->strategy, info->adaptive_strat);
	ft_printf("~[bench] disorder: %f\n", info->disorder);
	ft_printf("~[bench] strategy: %s\n", str_strat);
	ft_printf("~[bench] total_ops: %i\n", count_op->total_operations);
	ft_printf("~[bench] sa: %i sb: %i ss: %i pa: %i pb: %i\n",
		count_op->sa, count_op->sb, count_op->ss, count_op->pa, count_op->pb);
	ft_printf("~[bench] ra: %i rb: %i rr: %i rra: %i rrb: %i\n",
		count_op->ra, count_op->rb, count_op->rr, count_op->rra, count_op->rrb);
}
