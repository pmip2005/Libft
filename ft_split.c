/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:24:34 by ppoco             #+#    #+#             */
/*   Updated: 2026/10/30 20:43:35 by ppoco            ###   ########.fr       */
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

static char	*fill_word(char const *s, int j)
{
	char	*word;

	word = malloc(sizeof(char) * (j + 1));
	if (!word)
	{
		return (NULL);
	}
	ft_strlcpy(word, s, j + 1);
	return (word);
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
		while (s[i] == c)
			i++;
		j = get_word_len(s, c, i);
		ptr[words] = fill_word(&s[i], j);
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
