/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 16:35:12 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/19 15:38:08 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}

// int	main()
// {
// 	char	s[] = "Test  1";
// 	char	s1[] = "Test  1";

// 	ft_memset(s, 'a', 8);
// 	memset(s1, 'a', 8);
// 	printf("%s\n", s);
// 	printf("%s\n", s1);
// 	return 0;
// }