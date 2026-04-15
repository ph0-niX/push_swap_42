/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 12:01:39 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/19 17:59:06 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// int	main()
// {
// 	char	dest[8];
// 	char	dest1[8];
// 	char	src[] = "Copied";
// 	char	src1[] = "Copied";

// 	ft_memcpy(dest, src, 6);
// 	memcpy(dest1, src1, 6);
// 	printf("%s\n", dest);
// 	printf("%s\n", dest1);
// 	return 0;
// }