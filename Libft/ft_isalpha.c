/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 13:18:45 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/13 15:14:40 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

// #include <stdio.h>
// #include <ctype.h>

// int	main()
// {
// 	int	c;

// 	c = 'a';
// 	printf("%i\n", ft_isalpha(c));
// 	printf("%i\n", isalpha(c));
// 	return 0;
// }