/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:24:34 by ppoco             #+#    #+#             */
/*   Updated: 2026/11/02 16:14:38 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**allocate_words(const char *str, char c)
{
	int		i;
	int		words;
	char	**out;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
			words++;
		i++;
	}
	out = malloc(sizeof(char *) * (words + 1));
	return (out);
}

static int	get_word_len(char const *s, char c, int i)
{
	int	j;

	j = 0;
	while (s[i + j] != c && s[i + j])
		j++;
	return (j);
}

static void	free_words(char **ptr, int count)
{
	int	i;

	i = 0;
	while (i < count)
		free(ptr[i++]);
	free(ptr);
}

static int	skip_delimiters(const char *s, int *i, char c)
{
	while (s[*i] == c)
		(*i)++;
	if (s[*i] == '\0')
		return (-1);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		words;
	char	**ptr;

	if (!s)
		return (NULL);
	i = 0;
	words = 0;
	ptr = allocate_words(s, c);
	if (!ptr)
		return (free_words(ptr, words), NULL);
	while (s[i])
	{
		if (skip_delimiters(s, &i, c) == -1)
			break ;
		j = get_word_len(s, c, i);
		ptr[words] = ft_substr(s, i, j);
		if (!ptr[words])
			return (free_words(ptr, words), NULL);
		words ++;
		i += j;
	}
	ptr[words] = NULL;
	return (ptr);
}

// int main(void)
// {
// 	char **words;
// 	size_t i;
// 	i = 0;
// 	words = ft_split("one,two", ',');
// 	while (words[i])
// 		printf("%s\n", words[i++]);
// 	i = 0;
// 	while (words[i])
// 		free(words[i++]);
// 	free(words);
// 	return (0);
// }
