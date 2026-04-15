/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 17:04:41 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/20 14:03:25 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t				i;

	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

// int	main()
// {
// 	char	str[] = "Find me the 1st";
// 	int	c;

// 	c = '\0';
// 	printf("%s\n", (char *)ft_memchr(str, c, 16));
// 	printf("%s\n", (char *)memchr(str, c, 16));
// 	return (0);
// }