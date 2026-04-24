/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ra.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 17:30:31 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/24 12:19:20 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_Stack *stack_a, t_Count_op *counter)
{
	rotate(stack_a);
	counter->ra += 1;
	counter->total_operations += 1;
	ft_printf("ra\n");
}
