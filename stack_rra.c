/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rra.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:20:22 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/24 12:19:55 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_Stack *stack_a, t_Count_op *counter)
{
	rev_rotate(stack_a);
	counter->rra += 1;
	counter->total_operations += 1;
	ft_printf("rra\n");
}
