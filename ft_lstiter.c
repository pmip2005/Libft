/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:09:09 by ppoco             #+#    #+#             */
/*   Updated: 2026/10/30 20:48:06 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	if (!lst)
		return ;
	ptr = lst;
	while (ptr)
	{
		f(ptr->content);
		ptr = ptr->next;
	}
}

// static void print_content(void *content)
// {
// 	printf("%s\n", (char *)content);
// }
//
// int main(void)
// {
// 	t_list node;
// 	node.content = "item";
// 	node.next = NULL;
// 	ft_lstiter(&node, print_content);
// 	return (0);
// }
