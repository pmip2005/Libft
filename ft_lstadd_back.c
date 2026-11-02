/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:20:22 by ppoco             #+#    #+#             */
/*   Updated: 2026/10/30 20:48:13 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}

// int main(void)
// {
// 	t_list first;
// 	t_list second;
// 	t_list *list;
// 	first.content = "first";
// 	first.next = NULL;
// 	second.content = "second";
// 	second.next = NULL;
// 	list = &first;
// 	ft_lstadd_back(&list, &second);
// 	printf("%s\n", (char *)ft_lstlast(list)->content);
// 	return (0);
// }
