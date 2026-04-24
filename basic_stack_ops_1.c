/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:14:43 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/24 11:19:46 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_Node	*pop_top(t_Stack *stack)
{
	t_Node	*tmp;

	tmp = NULL;
	if (stack->size > 0)
	{
		tmp = stack->head;
		stack->head = stack->head->next;
		tmp->next = NULL;
		stack->size -= 1;
	}
	else
		ft_printf("Stack is already empty.\n");
	return (tmp);
}

t_Node	*pop_bottom(t_Stack *stack)
{
	t_Node	*tmp;

	tmp = NULL;
	if (stack->size > 0)
	{
		tmp = stack->tail;
		stack->tail = stack->tail->prev;
		stack->tail->next = NULL;
		stack->size -= 1;
	}
	else
		ft_printf("Stack is already empty.\n");
	return (tmp);
}

void	swap(t_Stack *stack)
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

void	add_node_back(t_Stack *stack, t_Node *new_node)
{
	if (!stack->head)
	{
		stack->head = new_node;
		stack->tail = new_node;
		stack->size++;
	}
	else
	{
		stack->tail->next = new_node;
		new_node->prev = stack->tail;
		stack->tail = new_node;
		new_node->next = NULL;
		stack->size++;
	}
}

void	add_node_front(t_Stack *stack, t_Node *new_node)
{
	if (!stack->head)
	{
		stack->head = new_node;
		stack->tail = new_node;
		stack->size++;
	}
	else
	{
		new_node->next = stack->head;
		stack->head->prev = new_node;
		stack->head = new_node;
		new_node->prev = NULL;
		stack->size++;
	}
}
