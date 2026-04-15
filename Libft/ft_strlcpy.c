/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 14:01:58 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/19 15:57:16 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size == 0)
		return (ft_strlen(src));
	i = 0;
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

//Should be compiled with -lbsd flag.

// int	main()
// {
// 	char	dest[] = "";
// 	char	src[] = "Copy check";
// 	char	dest1[] = "";

// 	ft_strlcpy(&dest[0], src, 8);
// 	printf("%s\n", &dest[0]);
// 	strlcpy(&dest1[0], src, 8);
// 	printf("%s\n", &dest1[0]);
// }
