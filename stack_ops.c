/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 10:54:11 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/21 17:50:50 by dshcherb         ###   ########.fr       */
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

void	swap_top(t_Stack *stack)
{
	int	elem1;
	int	elem2;

	if (stack->size < 2)
		return ;
	elem1 = stack->head->value;
	elem2 = stack->head->next->value;
	stack->head->value = elem2;
	stack->head->next->value = elem1;
}

void	rotate_stack(t_Stack *stack)
{
	t_Node	*tmp;

	if (stack->size <= 1)
		return ;
	if (stack->size == 2)
		swap_top(stack);
	else
	{
		tmp = pop_stack(stack);
		add_node_back(stack, tmp);
	}
}

t_Node	*pop_last(t_Stack *stack)
{
	t_Node	*tmp;

	tmp = NULL;
	if (stack->size > 0)
	{
		tmp = stack->tail;
		stack->tail = stack->tail->prev;
		stack->tail->next = NULL;
	}
	else
		ft_printf("Stack is already empty.\n");
	return (tmp);
}

void	reverse_rotate(t_Stack *stack)
{
	t_Node	*tmp;

	if (stack->size <=1)
		return ;
	if (stack->size == 2)
		swap_top(stack);
	else
	{
		tmp = pop_last(stack);
		add_node_front(stack, tmp);
	}
}
