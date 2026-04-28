/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compute_disorder.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 12:52:50 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/28 13:27:50 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

float	compute_disorder(t_Stack *stack_a)
{
	float	mistakes;
	float	pairs;
	float	disorder;

	if (!stack_a)
		return (0);
	mistakes = 0;
	pairs = 0;
	while (stack_a->head->next != NULL)
	{
		if (stack_a->head->value > stack_a->head->next->value)
			mistakes += 1;
		stack_a->head = stack_a->head->next;
		pairs += 1;
	}
	disorder = mistakes / pairs;
	printf("Disorder: %f\n", disorder);
	return (disorder);
}
