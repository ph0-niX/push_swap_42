/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:16:26 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/11 16:52:55 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main()
// {
// 	int	c;

// 	c = -1;
// 	printf("%d\n", ft_isascii(c));
// 	printf("%d\n", isascii(c));
// }