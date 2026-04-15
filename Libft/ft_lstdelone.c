/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 10:28:20 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/26 14:21:54 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* void	*del(void *content)
{
	free(content);
	content = NULL;
}

int	main()
{
	t_list  *list;
	int n = 5;
	
	list->content = &n;
	list->next = NULL;

	ft_lstdelone(list, del);

} */