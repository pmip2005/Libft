/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:19:39 by ppoco             #+#    #+#             */
/*   Updated: 2026/10/30 20:48:05 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int main(void)
// {
// 	t_list first;
// 	t_list last;
// 	first.content = "first";
// 	first.next = &last;
// 	last.content = "last";
// 	last.next = NULL;
// 	printf("%s\n", (char *)ft_lstlast(&first)->content);
// 	return (0);
// }
