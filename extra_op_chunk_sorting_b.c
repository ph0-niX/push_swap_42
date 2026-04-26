/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_op_chunk_sorting_b.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 16:18:06 by iyazykov          #+#    #+#             */
/*   Updated: 2026/04/26 16:29:38 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	take_and_push_from_head_b(t_Stack *s_a, t_Stack *s_b, t_Count_op *c_op, int counter)
{
	while (counter != 0)
	{
		rb(s_b, c_op);
		counter--;
	}
	pa(s_a, s_b, c_op);
}

void	take_and_push_from_tail_b(t_Stack *s_a, t_Stack *s_b, t_Count_op *c_op, int counter)
{
	while (counter != 0)
	{
		rrb(s_b, c_op);
		counter--;
	}
	rrb(s_b, c_op);
	pa(s_a, s_b, c_op);
}