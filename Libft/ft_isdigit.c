/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 15:37:40 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/11 15:44:59 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

// #include <stdio.h>
// #include <ctype.h>

// int	main()
// {
// 	int	c;

// 	c = '7';
// 	printf("%d\n", ft_isdigit(c));
// 	printf("%d\n", isdigit(c));
// 	return 0;
// }