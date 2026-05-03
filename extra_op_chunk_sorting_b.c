/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_op_chunk_sorting_b.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 16:18:06 by iyazykov          #+#    #+#             */
/*   Updated: 2026/05/03 12:50:31 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	from_head_b(t_Stack *s_a, t_Stack *s_b, t_Count_op *c_op, int c)
{
	while (c != 0)
	{
		rb(s_b, c_op);
		c--;
	}
	pa(s_a, s_b, c_op);
}

void	from_tail_b(t_Stack *s_a, t_Stack *s_b, t_Count_op *c_op, int c)
{
	while (c != 0)
	{
		rrb(s_b, c_op);
		c--;
	}
	rrb(s_b, c_op);
	pa(s_a, s_b, c_op);
}
