/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strat_simple.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:20:39 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/30 15:02:04 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_min_value(t_Stack *stack_a)
{
	t_Node	*current;
	int		min;

	current = stack_a->head;
	min = current->value;
	while (current)
	{
		if (min > current->value)
			min = current->value;
		current = current->next;
	}
	return (min);
}

static int	find_min_pos(t_Stack *stack_a, int min)
{
	t_Node	*current;
	int		position;

	current = stack_a->head;
	position = 1;
	while (current && current->value != min)
	{
		position++;
		current = current->next;
	}
	return (position);
}

static void	move_to_top(t_Stack *stack_a, int position, t_Count_op *counter)
{
	int	i;

	i = 0;
	if (position <= stack_a->size / 2)
	{
		while (i < position - 1)
		{
			ra(stack_a, counter);
			i++;
		}
	}
	else if (position > stack_a->size / 2)
	{
		while (i < stack_a->size - position + 1)
		{
			rra(stack_a, counter);
			i++;
		}
	}
	
}

void	simple(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *counter)
{
	int	min;
	int	position;

	while (stack_a->size > 1)
	{
		min = find_min_value(stack_a);
		position = find_min_pos(stack_a, min);
		move_to_top(stack_a, position, counter);
		if (compute_disorder(stack_a) == 0)
			break ;
		pb(stack_a, stack_b, counter);
	}
	while (stack_b->size > 0)
		pa(stack_a, stack_b, counter);
}
