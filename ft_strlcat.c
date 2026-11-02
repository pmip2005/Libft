/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:20:07 by ppoco             #+#    #+#             */
/*   Updated: 2026/10/30 20:43:35 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	dest_len;
	size_t	src_len;

	dest_len = 0;
	src_len = 0;
	while (dest_len < size && dest[dest_len])
		dest_len++;
	while (src[src_len])
		src_len++;
	if (dest_len == size)
		return (size + src_len);
	i = 0;
	while (src[i] && (dest_len + i + 1) < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
// int main(void)
// {
// 	char dest[16] = "lib";
// 	size_t length;
// 	length = ft_strlcat(dest, "ft", sizeof(dest));
// 	printf("%s %zu\n", dest, length);
// 	return (0);
// }
