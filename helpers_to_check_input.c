/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers_to_check_input.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iyazykov <iyazykov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 13:30:24 by iyazykov          #+#    #+#             */
/*   Updated: 2026/05/03 13:31:34 by iyazykov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isspace(char c)
{
	if (c == ' ' || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	check_sign(char c)
{
	if (c == '+' || c == '-')
	{
		if (c == '-')
			return (-1);
	}
	return (1);
}

int	is_flag(char **argv)
{
	int	i;
	int	count_flags;

	i = 0;
	count_flags = 0;
	while (argv[i])
	{
		if (ft_strncmp(argv[i], "--", 2) == 0)
			count_flags++;
		i++;
	}
	return (count_flags);
}
