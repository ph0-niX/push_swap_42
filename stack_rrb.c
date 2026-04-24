/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rrb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:05:01 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/24 12:20:03 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrb(t_Stack *stack_b, t_Count_op *counter)
{
	rev_rotate(stack_b);
	counter->rrb += 1;
	counter->total_operations += 1;
	ft_printf("rrb\n");
}
