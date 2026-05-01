/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_disorder.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:52:50 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/30 15:26:24 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

float	compute_disorder(t_Stack *stack_a)
{
	float	mistakes;
	float	pairs;
	float	disorder;
	t_Node	*tmp;

	if (!stack_a)
		return (0);
	tmp = stack_a->head;
	mistakes = 0;
	pairs = 0;
	while (tmp->next != NULL)
	{
		if (tmp->value > tmp->next->value)
			mistakes += 1;
		tmp = tmp->next;
		pairs += 1;
	}
	disorder = mistakes / pairs;
	printf("Disorder: %.2f\n", disorder);
	return (disorder);
}

void	set_disorder(t_Stack *stack_a, t_Info *info)
{
	info->disorder = compute_disorder(stack_a);
}
