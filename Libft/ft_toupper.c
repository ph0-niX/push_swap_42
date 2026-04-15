/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 14:42:04 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/23 16:06:36 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

// int	main()
// {
// 	char	c[] = "T07c";
// 	char	c1[] = "T07c";
// 	int	i;

// 	i = 0;
// 	printf("%s\n", c);
// 	while (c[i])
// 	{
// 		printf("%c", ft_toupper(c[i]));
// 		i++;
// 	}
// printf("\n");
// 	i = 0;
// 	printf("%s\n", c1);
// 	while (c1[i])
// 	{
// 		printf("%c", toupper(c1[i]));
// 		i++;
// 	}
// 	return (0);
// }