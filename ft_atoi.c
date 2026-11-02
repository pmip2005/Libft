/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <marvin@42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 12:06:18 by ppoco             #+#    #+#             */
/*   Updated: 2026/08/03 17:34:38 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_num(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	out;

	i = 0;
	out = 0;
	sign = 1;
	if (!str)
		return (0);
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (is_num(str[i]))
	{
		out = out * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(out * sign));
}
// int main(void)
// {
// 	printf("%d\n", ft_atoi("-42"));
// 	return (0);
// }
