/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rrr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:16:42 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/24 12:20:14 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *counter)
{
	rra(stack_a, counter);
	rrb(stack_b, counter);
	ft_printf("rrr\n");
}
