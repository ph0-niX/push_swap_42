/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strat_adaptive.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 12:12:09 by dshcherb          #+#    #+#             */
/*   Updated: 2026/05/03 15:31:13 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	adaptive(t_Stack *s_a, t_Stack *s_b, t_Count_op *counter, t_Info *info)
{
	if (info->disorder < 0.2 || s_a->size <= 10)
		simple(s_a, s_b, counter);
	else if (info->disorder >= 0.2 && info->disorder < 0.5)
		chunk_sorting(s_a, s_b, counter);
	else if (info->disorder >= 0.5)
		radix_sort(s_a, s_b, counter);
}
