/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 10:54:24 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/21 11:25:21 by dshcherb         ###   ########.fr       */
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
int		check_input(char **argv);
void	init_stack(t_Stack *stack);
t_Node	*new_node(int value);
void	add_node_back(t_Stack *stack, t_Node *new_node);
void	fill_stack(t_Stack *stack, char **argv);
t_Node	*pop_stack(t_Stack *stack);

#endif