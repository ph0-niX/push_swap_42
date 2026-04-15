/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 15:41:33 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/24 12:02:26 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

static int	safe_malloc(char **result, int position, size_t buffer)
{
	int	i;

	i = 0;
	result[position] = malloc(buffer);
	if (!result[position])
	{
		while (i < position)
			free(result[i++]);
		free(result);
		return (1);
	}
	return (0);
}

static int	fill(char **result, const char *s, char c)
{
	const char	*start;
	size_t		len;
	int			i;

	i = 0;
	while (*s)
	{
		len = 0;
		while (*s && *s == c)
			s++;
		start = s;
		while (*s && *s != c)
			s++;
		len = s - start;
		if (len)
		{
			if (safe_malloc(result, i, len + 1))
				return (1);
			ft_strlcpy(result[i], start, len + 1);
			i++;
		}
	}
	return (0);
}

char	**ft_split(const char *s, char c)
{
	int		word_nb;
	char	**result;

	if (!s)
		return (NULL);
	word_nb = word_count(s, c);
	result = malloc((word_nb + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result[word_nb] = NULL;
	if (fill(result, s, c))
		return (NULL);
	return (result);
}
