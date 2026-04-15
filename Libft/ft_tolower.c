/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 15:06:47 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/23 16:05:57 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
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
// 		printf("%c", ft_tolower(c[i]));
// 		i++;
// 	}
// 	printf("\n");
// 	i = 0;
// 	printf("%s\n", c1);
// 	while (c1[i])
// 	{
// 		printf("%c", tolower(c1[i]));
// 		i++;
// 	}
// 	return (0);
// }