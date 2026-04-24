/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chunk_based_sorting.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 11:56:14 by iyazykov          #+#    #+#             */
/*   Updated: 2026/04/24 12:19:00 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	chunk_sorting(t_Stack *stack_a, t_Stack *stack_b)
{
	int	i;
	int chunk_size;

	chunk_size = (((stack_a->size)/10) + 10);
	printf("%i", chunk_size);
}