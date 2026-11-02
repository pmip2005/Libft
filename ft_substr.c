/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:34:02 by ppoco             #+#    #+#             */
/*   Updated: 2026/10/30 20:44:00 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	source_len;
	char	*ptr;

	if (!s)
		return (NULL);
	source_len = ft_strlen(s);
	if ((size_t)start >= source_len)
		len = 0;
	else if (len > source_len - start)
		len = source_len - start;
	i = 0;
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (s[start + i] && i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// int main(void)
// {
// 	char *part;
// 	part = ft_substr("libft", 1, 3);
// 	printf("%s\n", part);
// 	free(part);
// 	return (0);
// }
