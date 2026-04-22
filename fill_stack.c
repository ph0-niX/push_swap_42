/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 13:43:56 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/22 14:26:49 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_stack(t_Stack *stack)
{
	stack->head = NULL;
	stack->tail = NULL;
	stack->size = 0;
}
t_Node	*new_node(int value)
{
	t_Node	*new_node;

	new_node = malloc(sizeof(t_Node));
	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->value = value;
	new_node->index = -1;
	return (new_node);
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

void	fill_stack(t_Stack *stack, char **argv)
{
	int		i;
	int		value;
	t_Node	*node;

	i = 1;
	value = 0;
	while (argv[i] && ft_strncmp(argv[i], "--", 2) == 0)
		i++;
	while (argv[i])
	{
		value = ft_atoi(argv[i]);
		node = new_node(value);
		add_node_back(stack, node);
		i++;
	}
}
