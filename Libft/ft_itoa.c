/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 11:40:36 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/24 18:26:16 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	n_count(int n)
{
	long	ln;
	int		count;

	ln = n;
	count = 0;
	if (ln <= 0)
	{
		ln = ln * -1;
		count++;
	}
	while (ln > 0)
	{
		count++;
		ln = ln / 10;
	}
	return (count);
}

static int	fill(char *str, long nb, int len)
{
	int	rem;

	rem = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		str[0] = '-';
	}
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		rem = nb % 10;
		str[len - 1] = rem + '0';
		len--;
		nb = nb / 10;
	}
	return (0);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	nb;

	nb = n;
	len = n_count(nb);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	fill(str, nb, len);
	return (str);
}

// int	main()
// {
// 	int	n;

// 	n = 0;
// 	// printf("%i\n", n_count(n));
// 	printf("%s\n", ft_itoa(n));
// 	return (0);
// }