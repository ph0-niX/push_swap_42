/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pick_strat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/01 12:44:49 by dshcherb          #+#    #+#             */
/*   Updated: 2026/05/03 12:17:09 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pick_strat(t_Stack *s_a, t_Stack *s_b, t_Count_op *c, t_Info *info)
{
	if (info->strategy == 0)
		simple(s_a, s_b, c);
	else if (info->strategy == 1)
		chunk_sorting(s_a, s_b, c);
	else if (info->strategy == 2)
		radix_sort(s_a, s_b, c);
	else
		adaptive(s_a, s_b, c, info);
	if (info->bench > 0)
		bench(info, c);
}
