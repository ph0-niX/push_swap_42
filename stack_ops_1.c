/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 18:00:42 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/22 16:48:22 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *counter, char c)
{
	t_Node	*new_node;

	if (c == 'a')
	{
		new_node = pop_stack(stack_b);
		if (!new_node)
			return ;
		add_node_front(stack_a, new_node);
		counter->pa += 1;
		counter->total_operations += 1;
	}
	if (c == 'b')
	{
		new_node = pop_stack(stack_a);
		if (!new_node)
			return ;
		add_node_front(stack_b, new_node);
		counter->pb += 1;
		counter->total_operations += 1;
	}
	else
		print_error();
}
