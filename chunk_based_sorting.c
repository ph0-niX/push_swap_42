/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_based_sorting.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:56:14 by iyazykov          #+#    #+#             */
/*   Updated: 2026/04/26 14:59:24 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	take_chunk_size(t_Stack *stack_a)
{
	if (stack_a->size > 200)
		return (15);
	else if (stack_a->size > 50)
		return (10);
	else
		return (5);
}

void	take_and_push_from_head_a(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *count_op, int counter)
{
	while (counter != 0)
	{
		ra(stack_a, count_op);
		counter--;
	}
	pb(stack_a, stack_b, count_op);
}

void	take_and_push_from_tail_a(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *count_op, int counter)
{
	while (counter != 0)
	{
		rra(stack_a, count_op);
		counter--;
	}
	rra(stack_a, count_op);
	pb(stack_a, stack_b, count_op);
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

void	find_elem_from_chunk(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *count_op)
{
	
	int	count_head;
	int	count_tail;
	int chunk_size;
	int i;
	
	chunk_size = take_chunk_size(stack_a);
	i = 0;
	while (stack_a->head)
	{
		count_head = take_count(stack_a, 1, chunk_size, 1);
		count_tail = take_count(stack_a, 0, chunk_size, 1);
		if (count_head <= count_tail)
			take_and_push_from_head_a(stack_a, stack_b, count_op, count_head);
		else if (count_head > count_tail)
			take_and_push_from_tail_a(stack_a, stack_b, count_op, count_tail);
		i++;
		if (chunk_size == i)
			chunk_size += chunk_size;
	}
}


void	take_and_push_from_head_b(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *count_op, int counter)
{
	while (counter != 0)
	{
		rb(stack_b, count_op);
		counter--;
	}
	pa(stack_a, stack_b, count_op);
}

void	take_and_push_from_tail_b(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *count_op, int counter)
{
	while (counter != 0)
	{
		rrb(stack_b, count_op);
		counter--;
	}
	rrb(stack_b, count_op);
	pa(stack_a, stack_b, count_op);
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
	find_max_elem(stack_a, stack_b, count_op);
}

//==========================================================
	//int	i;
	// int chunk_size;
	// t_Node	*tmp;
	// int counter_next;
	// int counter_tmp;
	
	// chunk_size = take_chunk_size(stack_a);
	// i = 0;
	// counter_next = 0;
	// while (stack_a->head)
	// {
	// 	if (stack_a->head->index < chunk_size + 1)
	// 	{
	// 		pb(stack_a, stack_b, count_op);
	// 		i++;
	// 	}
	// 	else if (stack_a->tail->index < chunk_size + 1)
	// 	{
	// 		rra(stack_a, count_op);
	// 		pb(stack_a, stack_b, count_op);
	// 		i++;
	// 	}
	// 	else if (stack_a->head->index > chunk_size)
	// 		ra(stack_a, count_op);
	// 	if (chunk_size == i)
	// 		chunk_size += chunk_size;
	// }
	// while (stack_b->head)
	// {
	// 	tmp = stack_b->head;
	// 	while (tmp)
	// 	{
	// 		if (tmp->index == stack_b->size)
	// 		{
	// 			if (counter_next == 0)
	// 				pa(stack_a, stack_b, count_op);
	// 			else
	// 			{
	// 				counter_tmp = counter_next;
	// 				while (counter_next > 0)
	// 				{
	// 					rb(stack_b, count_op);
	// 					counter_next--;
	// 				}
	// 				pa(stack_a, stack_b, count_op);
	// 				while (counter_tmp > 0)
	// 				{
	// 					rrb(stack_b, count_op);
	// 					counter_tmp--;
	// 				}
	// 			}	
	// 			break;				
	// 		}
	// 		printf("size - %i, tmp->index - %i\n", stack_b->size, tmp->index);
	// 		counter_next++;
	// 		tmp = tmp->next;
	// 	}
	// }
	// ===================================================================
	// while (stack_a->head)
	// {
		
	// 	if (stack_a->head->index < chunk_size + 1)
	// 	{
	// 		pb(stack_a, stack_b, count_op);
	// 		i++;
	// 	}
	// 	else if (stack_a->tail->index < chunk_size + 1)
	// 	{
	// 		rra(stack_a, count_op);
	// 		pb(stack_a, stack_b, count_op);
	// 		i++;
	// 	}
	// 	else if (stack_a->head->index > chunk_size)
	// 		ra(stack_a, count_op);
	// 	if (chunk_size == i)
	// 		chunk_size += chunk_size;
	// }
	// while (stack_b->head)
	// {
	// 	if (stack_b->head->index == stack_b->size)
	// 		pa(stack_a, stack_b, count_op);
	// 	else if (stack_b->tail->index == stack_b->size)
	// 	{
	// 		rrb(stack_b, count_op);
	// 		pa(stack_a, stack_b, count_op);
	// 	}
	// 	else 
	// 		rb(stack_b, count_op);
	// }