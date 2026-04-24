/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 13:43:56 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/24 12:25:54 by dshcherb         ###   ########.fr       */
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
