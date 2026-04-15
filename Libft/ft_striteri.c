/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 09:41:19 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/25 10:56:36 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	f_test(unsigned int i, char *str)
// {
// 	printf("index = %d and %s\n", i, str);
// }

// int	main()
// {
// 	char	*str = "Testing";

// 	ft_striteri(str, f_test);
// 	printf("test: %s\n", str);

// 	return (0);
// }
