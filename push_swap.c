/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 11:09:27 by dshcherb          #+#    #+#             */
/*   Updated: 2026/04/14 14:28:59 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	// t_Stack	stack_a;
	// t_Stack	stack_b;
	t_Info	info;

	add_info(argc, argv, &info);
	if (info.error > 0)
		ft_putstr_fd("Error", 1);
	if (info.strategy == 0)
		ft_putnbr_fd(0, 1);
	if (info.strategy == 1)
		ft_putnbr_fd(1, 1);
	if (info.strategy == 2)
		ft_putnbr_fd(2, 1);
	if (info.error == 2)
		ft_putnbr_fd(2, 1);
	return (0);
}
