/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strat_adaptive.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:12:09 by dshcherb          #+#    #+#             */
/*   Updated: 2026/05/01 12:00:49 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	adaptive(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *counter, t_Info *info)
{
	if (info->disorder < 0.2)
		simple(stack_a, stack_b ,counter);
	if (info->disorder >= 0.2 && info->disorder < 0.5)
		chunk_sorting(stack_a, stack_b, counter);
	if (info->disorder >= 0.5)
		radix_sort(stack_a, stack_b, counter);
}
