/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_based_sorting.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:56:14 by iyazykov          #+#    #+#             */
/*   Updated: 2026/04/28 16:41:11 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	take_chunk_size(t_Stack *stack_a)
{
	if (stack_a->size > 400)
		return (40);
	else if (stack_a->size > 200)
		return (30);
	else if (stack_a->size > 50)
		return (20);
	else
		return (10);
}

int	take_count(t_Stack *stack, int derection, int max_value, int type)
{
	t_Node	*tmp;
	int		count;

	count = 0;
	if (derection == 1)
		tmp = stack->head;
	else
		tmp = stack->tail;
	while (tmp)
	{
		if (type == 1 && tmp->index < max_value)
			break ;
		if (type == 0 && tmp->index == max_value)
			break ;
		count++;
		if (derection == 1)
			tmp = tmp->next;
		else
			tmp = tmp->prev;
	}
	return (count);
}

void	find_elem_from_chunk(t_Stack *s_a, t_Stack *s_b, t_Count_op *count_op)
{
	int	count_head;
	int	count_tail;
	int	chunk_size;

	chunk_size = take_chunk_size(s_a);
	while (s_a->head)
	{
		count_head = take_count(s_a, 1, chunk_size, 1);
		count_tail = take_count(s_a, 0, chunk_size, 1);
		if (count_head <= count_tail)
			take_and_push_from_head_a(s_a, s_b, count_op, count_head);
		else if (count_head > count_tail)
			take_and_push_from_tail_a(s_a, s_b, count_op, count_tail);
		if (s_b->head->index < (chunk_size / 2))
		 	rb(s_b, count_op);
		chunk_size += 1;
	}
}

void	find_max_elem(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *count_op)
{
	int	count_head;
	int	count_tail;

	while (stack_b->head)
	{
		count_head = take_count(stack_b, 1, stack_b->size, 0);
		count_tail = take_count(stack_b, 0, stack_b->size, 0);
		if (count_head <= count_tail)
			take_and_push_from_head_b(stack_a, stack_b, count_op, count_head);
		else if (count_head > count_tail)
			take_and_push_from_tail_b(stack_a, stack_b, count_op, count_tail);
	}
}

void	chunk_sorting(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *count_op)
{
	find_elem_from_chunk(stack_a, stack_b, count_op);
	print_stack(stack_b);
	find_max_elem(stack_a, stack_b, count_op);
}
