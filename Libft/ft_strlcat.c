/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 16:14:44 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/19 15:57:32 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;
	size_t	j;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	i = 0;
	j = 0;
	if (size <= d_len)
		return (size + s_len);
	while (dst[i] && i < size)
		i++;
	while (src[j] && i < (size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (d_len + s_len);
}

//Should be compiled with -lbsd flag.

// int	main()
// {
// 	char	dest[] = "les ";
// 	char	src[] = "Copy test";
// 	char	dest1[] = "les ";
// 	int		len;

// 	len = (int)ft_strlcat(dest, src, 3);
// 	printf("%d %s\n", len, dest);
// 	len = (int)strlcat(dest1, src, 3);
// 	printf("%d %s\n", len, dest1);
// 	return (0);
// }