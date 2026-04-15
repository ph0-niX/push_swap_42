/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 16:38:48 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/21 14:43:20 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*des;
	size_t	sub_l;
	size_t	slen;

	slen = ft_strlen(s);
	if (slen <= start)
		return (ft_strdup(""));
	if ((slen - start) < len)
		sub_l = slen - start;
	else
		sub_l = len;
	des = malloc(sub_l + 1);
	if (!des)
		return (NULL);
	ft_strlcpy(des, s + start, sub_l + 1);
	return (des);
}

// int	main()
// {
// 	char	src[] = "Test  1";
// 	// char	*des;
// 	// size_t	len = 10;
// 	printf("%s\n", ft_substr(src, 2, 8));
// 	return (0);
// }