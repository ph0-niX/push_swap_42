/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sa.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:29:32 by dshcherb          #+#    #+#             */
/*   Updated: 2026/05/06 16:44:03 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_Stack *stack_a, t_Count_op *counter)
{
	swap(stack_a);
	counter->sa += 1;
	counter->total_operations += 1;
	ft_printf("sa\n");
}
