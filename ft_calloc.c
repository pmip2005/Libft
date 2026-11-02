/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/27 15:49:07 by ppoco             #+#    #+#             */
/*   Updated: 2026/10/30 20:40:34 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*ptr;

	if (nmemb == 0 || size == 0)
		return (malloc(1));
	total = nmemb * size;
	if (nmemb != total / size)
		return (NULL);
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}

// int main(void)
// {
// 	char *buffer;
// 	size_t i;
// 	buffer = ft_calloc(4, sizeof(char));
// 	if (!buffer)
// 		return (1);
// 	i = 0;
// 	while (i < 4)
// 		printf("%d ", buffer[i++]);
// 	free(buffer);
// 	return (0);
// }
