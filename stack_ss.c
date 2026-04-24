/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:34:29 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/24 12:20:42 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_Stack *stack_a, t_Stack *stack_b, t_Count_op *counter)
{
	sa(stack_a, counter);
	sb(stack_b, counter);
	ft_printf("ss\n");
}
