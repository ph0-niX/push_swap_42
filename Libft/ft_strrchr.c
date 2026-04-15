/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 15:49:00 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/20 15:07:36 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ns;
	int		i;

	i = 0;
	ns = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			ns = (char *)&s[i];
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (ns);
}

// int	main()
// {
// 	char	s[] = "Come together";
// 	int	c;

// 	c = '\0';
// 	printf("%s\n", ft_strrchr(s, c));
// 	printf("%s\n", strrchr(s, c));
// 	return (0);
// }