/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:19:51 by ppoco             #+#    #+#             */
/*   Updated: 2026/10/30 20:43:35 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (src[len])
		len++;
	if (size == 0)
		return (len);
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

// int main(void)
// {
// 	char dest[8];
// 	size_t length;
// 	length = ft_strlcpy(dest, "libft", sizeof(dest));
// 	printf("%s %zu\n", dest, length);
// 	return (0);
// }
