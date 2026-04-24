/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:09:27 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/24 11:13:56 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_Stack *stack)
{
	t_Node	*tmp;

	tmp = stack->head;
	while (tmp)
	{
		ft_printf("value -> %d; index -> %i\n", tmp->value, tmp->index);
		tmp = tmp->next;
	}
	write(1, "\n", 2);
}

int	main(int argc, char **argv)
{
	t_Stack		stack_a;
	// t_Stack		stack_b;
	t_Info		info;
	t_Count_op	count_op;

	add_info(argv, &info);
	check_input(argv, argc);
	init_stack(&stack_a);
	fill_stack(&stack_a, argc, argv);
	// print_stack(&stack_a);
	// pop_stack(&stack_a);
	// print_stack(&stack_a);
	// swap_top(&stack_a, &count_op, 'a');
	// print_stack(&stack_a);
	// rotate_stack(&stack_a, &count_op, 'b');
	// print_stack(&stack_a);
	// reverse_rotate(&stack_a);
	// print_stack(&stack_a);
	// init_stack(&stack_b);
	// printf("A_head: %p\n", stack_a.head);
	// printf("B_head: %p\n", stack_b.head);
	// push(&stack_a, &stack_b, &count_op, 'b');
	// push(&stack_a, &stack_b, &count_op, 'b');
	// push(&stack_a, &stack_b, &count_op, 'b');
	// printf("A_head: %p\n", stack_a.head);
	// printf("B_head: %p\n", stack_b.head);
	// print_stack(&stack_a);
	// print_stack(&stack_b);
	// ft_printf("Total ops: %d\n", count_op.total_operations);
	// ft_printf("pb: %d\n", count_op.pb);
	// ft_printf("pa: %d\n", count_op.pa);
	//fill_stack(&stack_a, argc, argv);
	put_index(&stack_a);
	print_stack(&stack_a);
	// pop_stack(&stack_a);
	// print_stack(&stack_a);
	return (0);
}
