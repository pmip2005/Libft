/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 20:45:21 by ppoco             #+#    #+#             */
/*   Updated: 2026/11/02 13:09:21 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//make && cc -Wall -Wextra -Werror test_libft.c libft.a -o test_libft
#include "libft.h"
#include <assert.h>

static unsigned int iter_count;

static char uppercase_at(unsigned int index, char character)
{
	(void)index;
	if (character >= 'a' && character <= 'z')
		character -= 32;
	return (character);
}

static void uppercase_char(unsigned int index, char *character)
{
	(void)index;
	if (*character >= 'a' && *character <= 'z')
		*character -= 32;
}

static void *copy_text(void *content)
{
	return (ft_strdup((const char *)content));
}

static void free_text(void *content)
{
	free(content);
}

static void count_content(void *content)
{
	if (content)
		iter_count++;
}

int	main(void)
{
	char		buffer[16];
	char		searchable[] = "letter";
	char		move_buffer[] = "abcdef";
	char		*text;
	char		**words;
	size_t		index;
	int			*zeroed;
	t_list		*list;
	t_list		*mapped;
	t_list		*single;

	assert(ft_isalpha('A'));
	assert(ft_isdigit('5'));
	assert(ft_isalnum('7'));
	assert(ft_isascii(127));
	assert(ft_isprint(' '));
	assert(ft_toupper('a') == 'A');
	assert(ft_tolower('A') == 'a');
	assert(ft_strlen("libft") == 5);
	assert(ft_strlcpy(buffer, "libft", sizeof(buffer)) == 5);
	assert(strcmp(buffer, "libft") == 0);
	assert(ft_strlcat(buffer, "!", sizeof(buffer)) == 6);
	assert(strcmp(buffer, "libft!") == 0);
	assert(strcmp(ft_strchr(searchable, 't'), "tter") == 0);
	assert(strcmp(ft_strrchr(searchable, 't'), "ter") == 0);
	assert(ft_strncmp("abc", "abd", 3) < 0);
	assert(ft_strnstr("libft library", "library", 13) != NULL);
	assert(ft_memset(buffer, 'x', 5) == buffer);
	buffer[5] = '\0';
	assert(strcmp(buffer, "xxxxx") == 0);
	ft_bzero(buffer, sizeof(buffer));
	assert(buffer[0] == '\0');
	assert(ft_memcpy(buffer, "copy", 5) == buffer);
	assert(strcmp(buffer, "copy") == 0);
	assert(ft_memmove(move_buffer + 2, move_buffer, 4) == move_buffer + 2);
	assert(strcmp(move_buffer, "ababcd") == 0);
	assert(ft_memchr(buffer, 'p', 4) == buffer + 2);
	assert(ft_memcmp("abc", "abd", 3) < 0);
	assert(ft_atoi(" -42") == -42);
	zeroed = ft_calloc(4, sizeof(*zeroed));
	assert(zeroed != NULL);
	assert(zeroed[0] == 0 && zeroed[1] == 0);
	free(zeroed);
	text = ft_strdup("libft");
	assert(text != NULL && strcmp(text, "libft") == 0);
	free(text);
	text = ft_substr("libft", 1, 3);
	assert(text != NULL && strcmp(text, "ibf") == 0);
	free(text);
	text = ft_strjoin("lib", "ft");
	assert(text != NULL && strcmp(text, "libft") == 0);
	free(text);
	text = ft_strtrim("..libft..", ".");
	assert(text != NULL && strcmp(text, "libft") == 0);
	free(text);
	words = ft_split("one,two,three", ',');
	assert(words != NULL);
	assert(strcmp(words[0], "one") == 0);
	assert(strcmp(words[1], "two") == 0);
	assert(strcmp(words[2], "three") == 0);
	assert(words[3] == NULL);
	index = 0;
	while (words[index])
		free(words[index++]);
	free(words);
	text = ft_itoa(-42);
	assert(text != NULL && strcmp(text, "-42") == 0);
	free(text);
	text = ft_strmapi("libft", uppercase_at);
	assert(text != NULL && strcmp(text, "LIBFT") == 0);
	free(text);
	ft_striteri(buffer, uppercase_char);
	assert(strcmp(buffer, "COPY") == 0);
	ft_putchar_fd('O', STDOUT_FILENO);
	ft_putstr_fd("K", STDOUT_FILENO);
	ft_putendl_fd("", STDOUT_FILENO);
	ft_putnbr_fd(42, STDOUT_FILENO);
	ft_putchar_fd('\n', STDOUT_FILENO);
	list = ft_lstnew(ft_strdup("two"));
	assert(list != NULL && list->content != NULL);
	single = ft_lstnew(ft_strdup("one"));
	assert(single != NULL && single->content != NULL);
	ft_lstadd_front(&list, single);
	assert(ft_lstsize(list) == 2);
	assert(strcmp((char *)ft_lstlast(list)->content, "two") == 0);
	iter_count = 0;
	ft_lstiter(list, count_content);
	assert(iter_count == 2);
	mapped = ft_lstmap(list, copy_text, free_text);
	assert(mapped != NULL && strcmp((char *)mapped->content, "one") == 0);
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("three")));
	assert(ft_lstsize(list) == 3);
	assert(strcmp((char *)ft_lstlast(list)->content, "three") == 0);
	single = ft_lstnew(ft_strdup("delete"));
	assert(single != NULL && single->content != NULL);
	ft_lstdelone(single, free_text);
	ft_lstclear(&mapped, free_text);
	ft_lstclear(&list, free_text);
	assert(mapped == NULL && list == NULL);
	printf("all 43 libft function checks passed\n");
	return (0);
}