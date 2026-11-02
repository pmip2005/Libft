/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:18:42 by ppoco             #+#    #+#             */
/*   Updated: 2026/10/30 20:44:00 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	const char	*retvar;

	retvar = NULL;
	while (*str)
	{
		if ((unsigned char)*str == (unsigned char)c)
			retvar = ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return ((char *)retvar);
}

// int main(void)
// {
// 	printf("%s\n", ft_strrchr("letter", 't'));
// 	return (0);
// }
