/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   extra_op_chunk_sorting_a.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 16:18:18 by iyazykov          #+#    #+#             */
/*   Updated: 2026/05/03 10:56:55 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	from_head_a(t_Stack *s_a, t_Stack *s_b, t_Count_op *c_op, int c)
{
	while (c != 0)
	{
		ra(s_a, c_op);
		c--;
	}
	pb(s_a, s_b, c_op);
}

void	from_tail_a(t_Stack *s_a, t_Stack *s_b, t_Count_op *c_op, int c)
{
	while (c != 0)
	{
		rra(s_a, c_op);
		c--;
	}
	rra(s_a, c_op);
	pb(s_a, s_b, c_op);
}
