/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:54:11 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/21 11:45:43 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_Node	*pop_stack(t_Stack *stack)
{
	t_Node	*tmp;

	tmp = NULL;
	if (stack->size > 0)
	{
		tmp = stack->head;
		stack->head = stack->head->next;
	}
	else
		ft_printf("Stack is already empty.\n");
	return (tmp);
}
