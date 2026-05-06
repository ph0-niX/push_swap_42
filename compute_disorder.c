/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_disorder.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:52:50 by dshcherb          #+#    #+#             */
/*   Updated: 2026/05/06 16:39:30 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

float	compute_disorder(t_Stack *stack_a)
{
	float	mistakes;
	float	pairs;
	float	disorder;
	t_Node	*tmp;
	t_Node	*tmp_next;

	if ((!stack_a) || (!stack_a->head))
		return (0);
	tmp = stack_a->head;
	mistakes = 0;
	pairs = 0;
	while (tmp != NULL)
	{
		tmp_next = tmp->next;
		while (tmp_next != NULL)
		{
			if (tmp->value > tmp_next->value)
				mistakes += 1;
			pairs += 1;
			tmp_next = tmp_next->next;
		}
		tmp = tmp->next;
	}
	disorder = mistakes / pairs;
	return (disorder);
}

void	set_disorder(t_Stack *stack_a, t_Info *info)
{
	info->disorder = compute_disorder(stack_a);
}
