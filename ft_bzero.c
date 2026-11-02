/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzerzo.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 20:39:20 by ppoco            #+#    #+#             */
/*   Updated: 2026/10/20 21:44:16 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	size_t			i;

	if (n < 1)
		return ;
	i = 1;
	p = (unsigned char *)s;
	*p = 0;
	while (i < n)
		p[i++] = 0;
}

// int main(void)
// {
// 	char buffer[6] = "hello";
// 	ft_bzero(buffer, sizeof(buffer));
// 	printf("%d\n", buffer[0]);
// 	return (0);
// }
