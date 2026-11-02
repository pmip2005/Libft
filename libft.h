/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppoco <ppoco@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:42:24 by ppoco             #+#    #+#             */
/*   Updated: 2026/11/02 12:44:04 by ppoco            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/* Needed by the library itself */
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

//MAINS
# include <stdio.h>
# include <string.h>
# include <ctype.h>
# include <fcntl.h>
# include <limits.h>

/* ************************************************************************** */
/*                          PART 1 - LIBC FUNCTIONS                           */
/* ************************************************************************** */

/* Character classification */
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);

/* Case conversion */
int				ft_toupper(int c);
int				ft_tolower(int c);

/* String length and copy */
size_t			ft_strlen(const char *s);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlcat(char *dst, const char *src, size_t size);

/* String search and comparison */
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(const char *big, const char *little, size_t len);

/* Memory manipulation */
void			*ft_memset(void *s, int c, size_t n);
void			ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);

/* String to integer conversion */
int				ft_atoi(const char *nptr);

/* Memory allocation (malloc based) */
void			*ft_calloc(size_t nmemb, size_t size);
char			*ft_strdup(const char *s);

/* ************************************************************************** */
/*                       PART 2 - ADDITIONAL FUNCTIONS                        */
/* ************************************************************************** */

/* String creation and modification */
char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);

/* Integer to string conversion */
char			*ft_itoa(int n);

/* String iteration */
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void			ft_striteri(char *s, void (*f)(unsigned int, char*));

/* Output to file descriptor */
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

/* ************************************************************************** */
/*                            PART 3 - LINKED LIST                            */
/* ************************************************************************** */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

/* List creation and insertion */
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstadd_back(t_list **lst, t_list *new);

/* List information */
unsigned int	ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);

/* List deletion */
void			ft_lstdelone(t_list *lst, void (*del)(void *));
void			ft_lstclear(t_list **lst, void (*del)(void *));

/* List iteration and mapping */
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

#endif
