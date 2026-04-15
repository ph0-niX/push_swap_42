/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 18:27:45 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/19 15:39:49 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_bzero(void *s, size_t n)
// {
// 	ft_memset(s, 0, n);
// }

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
	return (s);
}

// int	main()
// {
// 	char	s[] = "Test..";
// 	char	s1[] = "Test..";

// 	ft_bzero(s, 1);
// 	bzero(s1, 1);
// 	printf("%s\n", s);
// 	printf("%s\n", s1);
// 	return 0;
// }