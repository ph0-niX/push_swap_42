/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 18:10:09 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/21 14:59:52 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	r;

	i = 0;
	r = ft_strlen(s1);
	while (ft_strchr(set, s1[i]))
		i++;
	if (i == r)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[r - 1]))
		r--;
	return (ft_substr(s1, i, r - i));
}

// int	main()
// {
// 	char	test[] = "_Test_";

// 	printf("%s\n", ft_strtrim(test, "T_t"));
// 	return (0);
// }