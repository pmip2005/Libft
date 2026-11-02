/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 17:42:59 by ppoco             #+#    #+#             */
/*   Updated: 2026/10/30 20:44:00 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;

	if (!s || !f)
		return (NULL);
	ptr = malloc(ft_strlen(s) + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
// static char uppercase_at(unsigned int index, char character)
// {
// 	(void)index;
// 	if (character >= 'a' && character <= 'z')
// 		character -= 32;
// 	return (character);
// }
//
// int main(void)
// {
// 	char *mapped;
// 	mapped = ft_strmapi("libft", uppercase_at);
// 	printf("%s\n", mapped);
// 	free(mapped);
// 	return (0);
// }
