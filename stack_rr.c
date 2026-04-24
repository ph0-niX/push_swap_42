/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_rr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:47:36 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/24 12:19:44 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *counter)
{
	ra(stack_a, counter);
	rb(stack_b, counter);
	ft_printf("rr\n");
}
