/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 15:57:21 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/20 16:34:08 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*des;
	int		i;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	des = malloc(len + 1);
	if (!des)
		return (NULL);
	while (s[i])
	{
		des[i] = s[i];
		i++;
	}
	des[i] = '\0';
	return (des);
}
