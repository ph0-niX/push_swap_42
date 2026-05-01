/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pick_strat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 12:44:49 by dshcherb          #+#    #+#             */
/*   Updated: 2026/05/01 16:08:34 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pick_strat(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *counter, t_Info *info)
{
	
	if (info->strategy == 0)
		simple(stack_a, stack_b, counter);
	else if (info->strategy == 1)
		chunk_sorting(stack_a, stack_b, counter);
	else if (info->strategy == 2)
		radix_sort(stack_a, stack_b, counter);
	else 
		adaptive(stack_a, stack_b, counter, info);
}
