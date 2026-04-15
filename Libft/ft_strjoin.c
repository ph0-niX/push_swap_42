/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 17:36:58 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/21 15:32:26 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	flen;
	char	*ns;

	flen = (ft_strlen(s1) + ft_strlen(s2) + 1);
	ns = malloc(sizeof(char) * flen);
	if (!ns)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		ns[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ns[i] = s2[j];
		i++;
		j++;
	}
	ns[flen - 1] = '\0';
	return (ns);
}
