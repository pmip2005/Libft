/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:18:53 by ppoco             #+#    #+#             */
/*   Updated: 2026/10/30 20:44:00 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	x;

	if (little[0] == '\0')
		return ((char *)big);
	x = 0;
	while (x < len && big[x])
	{
		i = 0;
		while (x + i < len && little[i]
			&& little[i] == big[x + i])
			i++;
		if (little[i] == '\0')
			return ((char *)&big[x]);
		x++;
	}
	return (NULL);
}

// int main(void)
// {
// 	printf("%s\n", ft_strnstr("libft library", "library", 13));
// 	return (0);
// }
