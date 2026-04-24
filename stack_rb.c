/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:46:06 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/24 12:19:32 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_Stack *stack_b, t_Count_op *counter)
{
	rotate(stack_b);
	counter->rb += 1;
	counter->total_operations += 1;
	ft_printf("rb\n");
}
