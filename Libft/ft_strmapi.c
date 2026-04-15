/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 18:03:00 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/24 18:37:06 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	char	*res;
	int		i;

	if (!s)
		return (NULL);
	len = ft_strlen(s);
	res = malloc((len + 1) * sizeof(char));
	i = 0;
	if (!res)
		return (NULL);
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}

// char	f_test(unsigned int i, char c)
// {
// 	if (!(i % 2))
// 		return ((char)ft_toupper(c));
// 	return (c);
// }

// int	main()
// {
// 	char	*str = NULL;

// 	printf("%s\n", ft_strmapi(str, f_test));
// 	return (0);
// }
