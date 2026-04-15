/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 10:54:24 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/14 12:12:29 by dshcherb         ###   ########.fr       */
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
}	t_Node;

typedef struct Stack
{
	t_Node	*head;
	int		size;
}	t_Stack;

typedef struct Info
{
	int		strategy;
	int		bench;
	int		error;
	float	disorder;
	int		total_ops;
	int		sa;
	int		sb;
	int		ss;
	int		pa;
	int		pb;
	int		ra;
	int		rb;
	int		rr;
	int		rra;
	int		rrb;
	int		rrr;
}	t_Info;

void	add_info(int argc, char **argv, t_Info *info);

#endif