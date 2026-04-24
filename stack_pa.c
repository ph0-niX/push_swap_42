/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_pa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:36:11 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/24 11:41:12 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *counter)
{
	t_Node	*new_node;

	new_node = pop_top(stack_b);
	if (!new_node)
		return ;
	add_node_front(stack_a, new_node);
	counter->pa += 1;
	counter->total_operations += 1;
	ft_printf("pa\n");
}
