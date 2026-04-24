/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 17:30:46 by iyazykov          #+#    #+#             */
/*   Updated: 2026/04/22 15:34:24 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	put_index(t_Stack *stack)
{
	t_Node	*tmp;
	t_Node	*tmp_sec;
	int		i;

	tmp = stack->head;
	tmp_sec = stack->head;
	i = 0;
	while (tmp)
	{
		while (tmp_sec)
		{
			if (tmp->value > tmp_sec->value)
				i++;
			tmp_sec = tmp_sec->next;
		}
		tmp_sec = stack->head;
		tmp->index = i;
		tmp = tmp->next;
		i = 0;
	}
}