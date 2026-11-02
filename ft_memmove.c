/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:20:46 by ppoco             #+#    #+#             */
/*   Updated: 2026/10/30 20:42:55 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	if (dest == src)
		return (dest);
	if (s > d)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
		return (dest);
	}
	i = n;
	while (i > 0)
	{
		i--;
		d[i] = s[i];
	}
	return (dest);
}

// int main(void)
// {
// 	char buffer[] = "abcdef";
// 	ft_memmove(buffer + 2, buffer, 4);
// 	printf("%s\n", buffer);
// 	return (0);
// }
