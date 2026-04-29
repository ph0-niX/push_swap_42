/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 11:47:28 by iyazykov          #+#    #+#             */
/*   Updated: 2026/04/29 17:35:51 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_back(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *count_op)
{
	while (stack_b->head)
		pa(stack_a, stack_b, count_op);
}

void	radix_sort(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *count_op)
{
	int	max;
	int	bit_pos;
	int i;

	max = stack_a->size;
	bit_pos = 0;
	i = 0;
	while ((max >> bit_pos) > 0)
	{
		while (i != max)
		{
			if (!((stack_a->head->index >> bit_pos) & 1))
				pb(stack_a, stack_b, count_op);
			else if ((stack_a->head->index >> bit_pos) & 1)
				ra(stack_a, count_op);
			i++;
		}
		push_back(stack_a, stack_b, count_op);
		bit_pos++;
		i = 0;
	}
}