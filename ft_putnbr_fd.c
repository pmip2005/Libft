/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:18:18 by ppoco             #+#    #+#             */
/*   Updated: 2026/10/30 20:48:00 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	*s;

	s = ft_itoa(n);
	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

// int main(void)
// {
// 	ft_putnbr_fd(-42, STDOUT_FILENO);
// 	ft_putchar_fd('\n', STDOUT_FILENO);
// 	return (0);
// }
