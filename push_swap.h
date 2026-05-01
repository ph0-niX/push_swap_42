/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 10:54:24 by dshcherb          #+#    #+#             */
/*   Updated: 2026/05/01 16:42:06 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "Libft/libft.h"
# include "ft_printf/ft_printf.h"

typedef struct Node
{
	int			value;
	int			index;
	struct Node *next;
	struct Node *prev;
}	t_Node;

typedef struct Stack
{
	t_Node	*head;
	t_Node	*tail;
	int		size;
}	t_Stack;

typedef struct Info
{
	int		strategy;
	int		bench;
	float	disorder;
}	t_Info;

typedef struct Count_op
{
	int	total_operations;
	int	sa;
	int	sb;
	int	ss;
	int	pa;
	int	pb;
	int	ra;
	int	rb;
	int	rr;
	int	rra;
	int	rrb;
	int	rrr;
}	t_Count_op;

void	add_info(char **argv, t_Info *info);
void	print_error(void);
int		check_input(char **argv, int argc);
int		is_flag(char **argv);
void	fill_stack(t_Stack *stack, int argc, char **argv);
void	put_index(t_Stack *stack);
void	init_count(t_Count_op *counter);
void	init_stack(t_Stack *stack);
t_Node	*new_node(int value);
void	add_node_back(t_Stack *stack, t_Node *new_node);
t_Node	*pop_top(t_Stack *stack);
void	swap(t_Stack *stack);
void	rotate(t_Stack *stack);
t_Node	*pop_bottom(t_Stack *stack);
void	rev_rotate(t_Stack *stack);
void	add_node_front(t_Stack *stack, t_Node *new_node);
void	sa(t_Stack *stack_a, t_Count_op *counter);
void	sb(t_Stack *stack_b, t_Count_op *counter);
void	ss(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *counter);
void	pa(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *counter);
void	pb(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *counter);
void	ra(t_Stack *stack_a, t_Count_op *counter);
void	rb(t_Stack *stack_b, t_Count_op *counter);
void	rr(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *counter);
void	rra(t_Stack *stack_a, t_Count_op *counter);
void	rrb(t_Stack *stack_b, t_Count_op *counter);
void	rrr(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *counter);
void	chunk_sorting(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *count_op);
void	take_and_push_from_head_b(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *count_op, int counter);
void	take_and_push_from_tail_b(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *count_op, int counter);
void	take_and_push_from_head_a(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *count_op, int counter);
void	take_and_push_from_tail_a(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *count_op, int counter);
void	print_stack(t_Stack *stack);
void	simple(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *counter);
float	compute_disorder(t_Stack *stack_a);
void	radix_sort(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *count_op);
void	set_disorder(t_Stack *stack_a, t_Info *info);
void	adaptive(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *counter, t_Info *info);
void	pick_strat(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *counter, t_Info *info);
void	free_stack(t_Stack *stack);

#endif