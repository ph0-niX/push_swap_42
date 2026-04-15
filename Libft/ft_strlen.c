/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/12 10:12:00 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/19 15:37:01 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int	main()
// {
// 	char	s[] = "Count test";

// 	printf("%lu\n", ft_strlen(s));
// 	printf("%lu\n", strlen(s));
// 	return 0;
// }