/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 17:33:34 by ppoco             #+#    #+#             */
/*   Updated: 2026/10/30 20:43:35 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	i;
	char	*ptr;

	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen((char *)s1);
	ptr = malloc(s1len + ft_strlen((char *)s2) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		ptr[s1len + i] = s2[i];
		i++;
	}
	ptr[s1len + i] = '\0';
	return (ptr);
}

// int main(void)
// {
// 	char *joined;
// 	joined = ft_strjoin("lib", "ft");
// 	printf("%s\n", joined);
// 	free(joined);
// 	return (0);
// }
