/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 15:28:04 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/19 16:22:55 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	revcpy(unsigned char *d, const unsigned char *s, size_t n)
{
	while (n > 0)
	{
		d[n - 1] = s[n - 1];
		n--;
	}
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (dest == NULL && src == NULL)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
		revcpy(d, s, n);
	return (dest);
}

// int	main()
// {
// 	char	dest[17] = "1234567891234567";
// 	char	dest1[17] = "1234567891234567";
// 	char *ptr = (char *)&dest[0];
// 	char *ptr1 = (char *)&dest1[0];
// 	// char	dest1[10];
// 	// char	src[] = "Copy test";
// 	// char	src1[] = "Copy test";
// 	write(1, "Zahodim brat\n", 14);
// 	ptr = memmove(NULL, NULL, 7);
// 	printf("%p\n", ptr);
// 	write(1, "Zahodim brat2\n", 15);
// 	ptr1 = ft_memmove(NULL, NULL, 7);
// 	printf("%p\n", ptr1);
// 	return 0;
// }