/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:20:36 by ppoco             #+#    #+#             */
/*   Updated: 2026/10/30 20:42:55 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	out;
	size_t			i;

	if (n < 1)
		return (s);
	i = 1;
	out = c;
	p = (unsigned char *)s;
	*p = out;
	while (i < n)
		p[i++] = out;
	return (s);
}

// int main(void)
// {
// 	char buffer[6] = "hello";
// 	ft_memset(buffer, 'x', 5);
// 	printf("%s\n", buffer);
// 	return (0);
// }
