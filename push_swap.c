/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:09:27 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/24 12:30:26 by dshcherb         ###   ########.fr       */
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
	t_Stack		stack_b;
	t_Info		info;
	t_Count_op	count_op;

	(void) argc;
	init_count(&count_op);
	add_info(argv, &info);
	check_input(argv, argc);
	init_stack(&stack_a);
	fill_stack(&stack_a, argc, argv);
	// print_stack(&stack_a);
	// pop_top(&stack_a);
	// print_stack(&stack_a);
	// swap(&stack_a);
	// print_stack(&stack_a);
	// rotate_stack(&stack_a, &count_op, 'b');
	// rotate(&stack_a);
	// print_stack(&stack_a);
	// rev_rotate(&stack_a);
	// print_stack(&stack_a);
	init_stack(&stack_b);
	// printf("A_head: %p\n", stack_a.head);
	// printf("B_head: %p\n", stack_b.head);
	pb(&stack_a, &stack_b, &count_op);
	pb(&stack_a, &stack_b, &count_op);
	// pa(&stack_a, &stack_b, &count_op);
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
	print_stack(&stack_a);
	print_stack(&stack_b);
	ft_printf("Total ops: %d\n", count_op.total_operations);
	ft_printf("pb: %d\n", count_op.pb);
	ft_printf("pa: %d\n", count_op.pa);
	return (0);
}
