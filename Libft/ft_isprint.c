/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 16:43:41 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/11 16:56:04 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// #include <stdio.h>
// #include <ctype.h>

// int	main()
// {
// 	int	c;

// 	c = ' ';
// 	printf("%d\n", ft_isprint(c));
// 	printf("%d\n", isprint(c));
// 	return 0;
// }