/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 17:43:24 by ppoco             #+#    #+#             */
/*   Updated: 2026/10/30 20:43:35 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// static void uppercase_char(unsigned int index, char *character)
// {
// 	(void)index;
// 	if (*character >= 'a' && *character <= 'z')
// 		*character -= 32;
// }
//
// int main(void)
// {
// 	char text[] = "libft";
// 	ft_striteri(text, uppercase_char);
// 	printf("%s\n", text);
// 	return (0);
// }
