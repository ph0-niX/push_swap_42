/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_pb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:41:25 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/24 12:12:45 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *counter)
{
	t_Node	*new_node;

	new_node = pop_top(stack_a);
	if (!new_node)
		return ;
	add_node_front(stack_b, new_node);
	counter->pb += 1;
	counter->total_operations += 1;
	ft_printf("pb\n");
}
