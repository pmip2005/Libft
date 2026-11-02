/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:19:48 by ppoco             #+#    #+#             */
/*   Updated: 2026/10/30 20:48:10 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst -> content);
	free(lst);
}

// int main(void)
// {
// 	t_list *node;
// 	node = ft_lstnew(ft_strdup("item"));
// 	ft_lstdelone(node, free);
// 	return (0);
// }
