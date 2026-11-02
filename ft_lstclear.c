/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:19:51 by ppoco             #+#    #+#             */
/*   Updated: 2026/10/30 20:40:34 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list			*current;
	t_list			*next;

	if (!lst || !del || !*lst)
		return ;
	current = *lst;
	while (current != NULL)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}

// int main(void)
// {
// 	t_list *list;
// 	list = ft_lstnew(ft_strdup("item"));
// 	ft_lstclear(&list, free);
// 	printf("%d\n", list == NULL);
// 	return (0);
// }
