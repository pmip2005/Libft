/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:21:04 by ppoco             #+#    #+#             */
/*   Updated: 2026/10/30 20:56:26 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str1;
	const unsigned char	*str2;

	i = 0;
	str1 = s1;
	str2 = s2;
	while ((str1[i] || str2[i]) && i < n)
	{
		if (str1[i] != str2[i])
			return ((int)(str1[i]) - (int)str2[i]);
		i++;
	}
	return (0);
}

// int main(void)
// {
// 	char first[] = "abc";
// 	char second[] = "abd";
// 	printf("%d\n", ft_memcmp(first, second, 3));
// 	return (0);
// }
