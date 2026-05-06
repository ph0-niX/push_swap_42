/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:09:27 by dshcherb          #+#    #+#             */
/*   Updated: 2026/05/06 17:00:44 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_and_return(t_Stack *stack, t_Info *info, t_Count_op *count)
{
	if (info->bench)
		bench(info, count);
	free_stack(stack);
	exit (0);
}

int	main(int argc, char **argv)
{
	t_Stack		stack_a;
	t_Stack		stack_b;
	t_Info		info;
	t_Count_op	count_op;

	init_count(&count_op);
	add_info(argv, &info);
	check_input(argv, argc);
	init_stack(&stack_a);
	fill_stack(&stack_a, argc, argv);
	set_disorder(&stack_a, &info);
	if (info.disorder == 0)
		free_and_return(&stack_a, &info, &count_op);
	put_index(&stack_a);
	init_stack(&stack_b);
	pick_strat(&stack_a, &stack_b, &count_op, &info);
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
