/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_stack_ops_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:23:37 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/24 11:28:07 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_Stack *stack)
{
	t_Node	*tmp;

	if (stack->size <= 1)
		return ;
	if (stack->size == 2)
		swap(stack);
	else
	{
		tmp = pop_top(stack);
		add_node_back(stack, tmp);
	}
}

void	rev_rotate(t_Stack *stack)
{
	t_Node	*tmp;

	if (stack->size <=1)
		return ;
	if (stack->size == 2)
		swap(stack);
	else
	{
		tmp = pop_bottom(stack);
		add_node_front(stack, tmp);
	}
}
