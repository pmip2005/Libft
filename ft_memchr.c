/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:21:12 by ppoco             #+#    #+#             */
/*   Updated: 2026/10/30 20:42:55 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*se;
	size_t				i;

	se = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (se[i] == (unsigned char)c)
			return ((void *)&se[i]);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char buffer[] = "libft";
// 	printf("%s\n", (char *)ft_memchr(buffer, 'f', 5));
// 	return (0);
// }
