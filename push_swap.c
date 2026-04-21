/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:09:27 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/21 17:49:18 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_Stack *stack)
{
	t_Node	*tmp;

	tmp = stack->head;
	while (tmp)
	{
		ft_printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
	write(1, "\n", 2);
}

int	main(int argc, char **argv)
{
	t_Stack	stack_a;
	// t_Stack	*stack_b;
	t_Info		info;
	// t_Count_op	count_op;

	(void) argc;
	add_info(argv, &info);
	check_input(argv);
	init_stack(&stack_a);
	fill_stack(&stack_a, argv);
	// print_stack(&stack_a);
	// pop_stack(&stack_a);
	// print_stack(&stack_a);
	// swap_top(&stack_a);
	// print_stack(&stack_a);
	// rotate_stack(&stack_a);
	// print_stack(&stack_a);
	// reverse_rotate(&stack_a);
	// print_stack(&stack_a);
	return (0);
}
