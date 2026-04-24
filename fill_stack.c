/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 13:43:56 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/24 11:04:07 by iyazykov         ###   ########.fr       */
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

void	fill_stack(t_Stack *stack, int argc, char **argv)
{
	int		i;
	t_Node	*node;
	char	**tmp_argv;

	i = 1;
	i += is_flag(argv);
	tmp_argv = argv;
	if ((argc - i) == 1)
	{
		tmp_argv = ft_split(argv[i], ' ');
		i = 0;
	}
	while (tmp_argv[i])
	{
		node = new_node(ft_atoi(tmp_argv[i]));
		add_node_back(stack, node);
		i++;
	}
}
