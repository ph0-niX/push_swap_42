/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshcherb <dshcherb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 13:31:19 by dshcherb          #+#    #+#             */
/*   Updated: 2026/03/26 16:21:18 by dshcherb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Iterates through the list ’lst’, applies the
// function ’f’ to each node’s content, and creates
// a new list resulting of the successive applications
// of the function ’f’. The ’del’ function is used to
// delete the content of a node if needed.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nl;
	void	*content;
	t_list	*new_node;

	if (!lst || !f || !del)
		return (NULL);
	nl = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&nl, del);
			return (NULL);
		}
		ft_lstadd_back(&nl, new_node);
		lst = lst->next;
	}
	return (nl);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include "libft.h"
// void *to_uppercase(void *content)
// {
//     char *str = (char *)content;
//     char *new_str = strdup(str);
//     int i = 0;

//     if (!new_str)
//         return NULL;

//     while (new_str[i])
//  {
//         if (new_str[i] >= 'a' && new_str[i] <= 'z')
//             new_str[i] -= 32;
//         i++;
//  }
//     return new_str;
// }

// // Delete function
// void del_content(void *content)
// {
//     free(content);
// }

// // Helper to print list
// void print_list(t_list *lst)
// {
//     while (lst)
//  {
//         printf("%s -> ", (char *)lst->content);
//         lst = lst->next;
//  }
//     printf("NULL\n");
// }

// int main(void)
// {
//     t_list *lst = NULL;
//     t_list *mapped;

//     // Create original list
//     ft_lstadd_back(&lst, ft_lstnew(strdup("hello")));
//     ft_lstadd_back(&lst, ft_lstnew(strdup("world")));
//     ft_lstadd_back(&lst, ft_lstnew(strdup("libft")));

//     printf("Original list:\n");
//     print_list(lst);

//     // Apply ft_lstmap
//     mapped = ft_lstmap(lst, to_uppercase, del_content);

//     printf("Mapped list:\n");
//     print_list(mapped);

//     // Cleanup
//     ft_lstclear(&lst, del_content);
//     ft_lstclear(&mapped, del_content);

//     return 0;
// }
