/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_based_sorting.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:56:14 by iyazykov          #+#    #+#             */
/*   Updated: 2026/04/26 11:32:04 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	chunk_sorting(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *count_op)
{
	int	i;
	int chunk_size;
	t_Node	*tmp;
	int counter_next;
	int counter_tmp;
	
	if (stack_a->size > 200)
		chunk_size = 15;
	else if (stack_a->size > 50)
		chunk_size = 10;
	else
		chunk_size = 5;
	i = 0;
	counter_next = 0;
	while (stack_a->head)
	{
		if (stack_a->head->index < chunk_size + 1)
		{
			pb(stack_a, stack_b, count_op);
			i++;
		}
		else if (stack_a->tail->index < chunk_size + 1)
		{
			rra(stack_a, count_op);
			pb(stack_a, stack_b, count_op);
			i++;
		}
		else if (stack_a->head->index > chunk_size)
			ra(stack_a, count_op);
		if (chunk_size == i)
			chunk_size += chunk_size;
	}
	while (stack_b->head)
	{
		tmp = stack_b->head;
		while (tmp)
		{
			if (tmp->index == stack_b->size)
			{
				if (counter_next == 0)
					pa(stack_a, stack_b, count_op);
				else
				{
					counter_tmp = counter_next;
					while (counter_next > 0)
					{
						rb(stack_b, count_op);
						counter_next--;
					}
					pa(stack_a, stack_b, count_op);
					while (counter_tmp > 0)
					{
						rrb(stack_b, count_op);
						counter_tmp--;
					}
				}	
				break;				
			}
			printf("size - %i, tmp->index - %i\n", stack_b->size, tmp->index);
			counter_next++;
			tmp = tmp->next;
		}
	}


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
}
