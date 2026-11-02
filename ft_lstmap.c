/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 17:54:57 by ppoco             #+#    #+#             */
/*   Updated: 2026/11/02 17:16:58 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		content = f(lst->content);
		if (!content)
			return (NULL);
		new_node = ft_lstnew(content);
		if (!new_node)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// static void *duplicate_content(void *content)
// {
// 	return (ft_strdup((char *)content));
// }
//
// int main(void)
// {
// 	t_list *source;
// 	t_list *mapped;
// 	source = ft_lstnew("item");
// 	mapped = ft_lstmap(source, duplicate_content, free);
// 	printf("%s\n", (char *)mapped->content);
// 	ft_lstclear(&mapped, free);
// 	free(source);
// 	return (0);
// }
