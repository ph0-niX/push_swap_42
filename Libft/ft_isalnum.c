/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:45:29 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/11 16:16:03 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <stdio.h>
// #include <ctype.h>

// int	main()
// {
// 	int	c;

// 	c = 'f';
// 	printf("%d\n", ft_isalnum(c));
// 	printf("%d\n", isalnum(c));
// 	return 0;
// }