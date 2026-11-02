/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:19:51 by ppoco             #+#    #+#             */
/*   Updated: 2026/10/30 20:48:12 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
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
// 	ft_lstadd_front(&list, &second);
// 	printf("%s\n", (char *)list->content);
// 	return (0);
// }
