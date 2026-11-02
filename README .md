*This project has been created as part of the 42 curriculum by ppoco.*

# Libft

**A personal C library built from the ground up**

---

## Description

Libft is a personal C library that replicates essential standard libc functions and adds extra utility routines, forming a foundational toolbox for future C assignments at 42.

The objective is to understand how strings, memory management, and pointers behave at a low level by implementing standard functions manually. The resulting compiled library (`libft.a`) is reusable across the 42 curriculum.

### Core Modules

* **Libc Functions:** Character validation, memory block handling, and standard string operations prefixed with `ft_`.
* **Additional Functions:** Advanced string manipulations (trimming, splitting, joining, converting) and file descriptor operations.
* **Linked Lists:** Dynamic data structure utilities to manage nodes, tracking content via addresses.

---

## Technical Specifications

### 1. Character & Verification Functions
Functions designed to validate or sanitize individual character inputs.

* `int ft_isalpha(int c)` — Returns 1 if `c` is an alphabetic character, 0 otherwise.
* `int ft_isdigit(int c)` — Returns 1 if `c` is a digit, 0 otherwise.
* `int ft_isalnum(int c)` — Returns 1 if `c` is alphanumeric, 0 otherwise.
* `int ft_isascii(int c)` — Returns 1 if `c` matches a valid ASCII value, 0 otherwise.
* `int ft_isprint(int c)` — Returns 1 if `c` is a printable character, 0 otherwise.
* `int ft_toupper(int c)` — Converts a lowercase letter to uppercase.
* `int ft_tolower(int c)` — Converts an uppercase letter to lowercase.

### 2. Memory & Buffer Manipulations
Low-level operations targeting raw memory blocks and arrays.

* `void ft_bzero(void *str, size_t n)` — Writes `n` null bytes into the specified target pointer.
* `void *ft_memset(void *dest, int ch, size_t count)` — Fills `count` bytes of `dest` with the character `ch`.
* `void *ft_memcpy(void *dest, const void *src, size_t count)` — Copies bytes from `src` to `dest` sequentially.
* `void *ft_memmove(void *dest, const void *src, size_t n)` — Safely copies memory blocks even if buffers overlap.
* `void *ft_memchr(const void *str, int chr, size_t size)` — Locates the first occurrence of `chr` within `size` bytes.
* `int ft_memcmp(const void *s1, const void *s2, size_t size)` — Compares byte arrays; returns the difference.
* `void *ft_calloc(size_t count, size_t size)` — Allocates zero-initialized heap memory for an array.

### 3. Standard String Operations
Basic pointer-based string handling routines modeled after `<string.h>`.

* `size_t ft_strlen(const char *str)` — Measures the length of a string, excluding the null terminator.
* `char *ft_strchr(const char *str, int ch)` — Returns a pointer to the first occurrence of `ch` in a string.
* `char *ft_strrchr(const char *str, int chr)` — Returns a pointer to the last occurrence of `chr` in a string.
* `int ft_strncmp(const char *s1, const char *s2, size_t n)` — Compares two strings up to `n` characters.
* `size_t ft_strlcpy(char *dest, const char *src, size_t size)` — Copies `src` safely into a size-bounded `dest` buffer.
* `size_t ft_strlcat(char *dest, const char *src, size_t size)` — Appends `src` onto `dest` with size restrictions.
* `char *ft_strnstr(const char *big, const char *little, size_t len)` — Locates a substring inside a length-limited string.
* `char *ft_strdup(const char *src)` — Duplicates a string using heap allocation.

### 4. Additional Complex Utilities
Advanced features requiring dynamic memory (`malloc`) or more complex loop logic.

* `int ft_atoi(const char *str)` — Parses a string and converts it into an integer.
* `char *ft_itoa(int number)` — Converts an integer into a dynamically allocated string.
* `char *ft_substr(char const *s, unsigned int start, size_t len)` — Extracts a subsection from a string.
* `char *ft_strjoin(char const *s1, char const *s2)` — Concatenates two strings into a new allocation.
* `char *ft_strtrim(char const *s1, char const *set)` — Trims the given set of characters from both ends of a string.
* `char **ft_split(char const *str, char c)` — Splits a string into a NULL-terminated array using a delimiter.
* `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` — Builds a new string by applying a function to each character and its index.
* `void ft_striteri(char *s, void (*f)(unsigned int, char*))` — Applies a function to each character of a string in place, with its index.

### 5. Output Management
Writes characters and strings directly to a given file descriptor.

* `void ft_putchar_fd(char c, int fd)` — Outputs a single character to the target descriptor.
* `void ft_putstr_fd(char *s, int fd)` — Writes a string to the designated descriptor.
* `void ft_putendl_fd(char *s, int fd)` — Outputs a string followed by a trailing newline (`\n`).
* `void ft_putnbr_fd(int n, int fd)` — Converts and prints an integer to the chosen descriptor.

### 6. Linked List Extensions
Allows manipulation of nodes via a linked pointer chain.

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```
* `t_list *ft_lstnew(void *content)` — Creates a new detached node containing the passed reference.
* `void ft_lstadd_front(t_list **lst, t_list *new)` — Inserts a node at the head of a list.
* `unsigned int ft_lstsize(t_list *lst)` — Counts the nodes in the list.
* `t_list *ft_lstlast(t_list *lst)` — Returns a pointer to the final node of a list.
* `void ft_lstadd_back(t_list **lst, t_list *new)` — Appends a node at the tail of an existing list.
* `void ft_lstdelone(t_list *lst, void (*del)(void*))` — Frees a node and its content using a custom delete function.
* `void ft_lstclear(t_list **lst, void (*del)(void*))` — Frees a node and all its successors, then sets the list pointer to NULL.
* `void ft_lstiter(t_list *lst, void (*f)(void *))` — Applies a function to the content of every node.
* `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` — Maps a list into a new list, using `del` to clean up on failure.

---

## Instructions

### Compilation Rules

Build the library with the provided `Makefile`:

```sh
make          # Compiles sources and generates the library archive (libft.a)
make clean    # Removes compiled object files (.o)
make fclean   # Removes object files and libft.a
make re       # Forces a clean rebuild
```

### Linking with a Project

Include the header in your C files:

```c
#include "libft.h"
```

Compile your sources against the static library:

```sh
cc main.c -L. -lft -I. -o program
```

---

## Resources

### References

* Linux man pages (section 3), e.g. `man 3 strlen`, `man 3 memmove`, `man 3 malloc` — https://man7.org/linux/man-pages/
* The C Programming Language, C standard library reference — https://en.cppreference.com/w/c
* 42 Norm and the libft subject (PDF)

### Use of AI

AI was used in a limited and supervised way on this project:

* **README formatting:** AI helped convert this README from a Word document into Markdown. It was used for formatting only.
* **Debugging (last resort):** After trying to solve the problem myself and discussing it with peers, I occasionally used AI to debug my code. I asked it only to point to the root cause of a problem, not to provide a fix, and I corrected the code myself.
* **Boilerplate files:** AI helped reorganise the `libft.h` prototypes layout from the function prototypes given in the subject.

No AI-generated code was copied in to implement the library functions.
