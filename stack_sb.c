/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_sb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:32:22 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/24 12:20:32 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_Stack *stack_b, t_Count_op *counter)
{
	swap(stack_b);
	counter->sb += 1;
	counter->total_operations += 1;
	ft_printf("sb\n");
}
