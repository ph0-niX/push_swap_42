*𝘛𝘩𝘪𝘴 𝘱𝘳𝘰𝘫𝘦𝘤𝘵 𝘩𝘢𝘴 𝘣𝘦𝘦𝘯 𝘤𝘳𝘦𝘢𝘵𝘦𝘥 𝘢𝘴 𝘱𝘢𝘳𝘵 𝘰𝘧 𝘵𝘩𝘦 42 𝘤𝘶𝘳𝘳𝘪𝘤𝘶𝘭𝘶𝘮 𝘣𝘺 𝘥𝘴𝘩𝘤𝘩𝘦𝘳𝘣*

# Libft

## Description

Libft is a foundational project in the 42 curriculum that consists of recreating a subset of the standard C library, along with additional utility functions. The goal of this project is to deepen understanding of low-level programming concepts such as memory management, pointers, string manipulation, and data structures.

By implementing these functions from scratch, this project provides insight into how standard library functions operate internally, while also building a reusable codebase that will be used in future 42 projects.

---

## Library Overview

The library (`libft.a`) is a static archive containing a collection of functions divided into several categories:

* Memory manipulation
* String handling
* Character checks and conversions
* Number conversion
* Output functions
* Advanced string utilities
* Linked list utilities (bonus)

All functions are written in C and follow the 42 Norm (coding standard).

---

## Detailed Function Documentation

### Memory Functions

#### `ft_memset`

Fills a memory area with a constant byte.

* Prototype: `void *ft_memset(void *b, int c, size_t len);`
* Returns: Pointer to the memory area `b`
* Details: Iterates over `len` bytes and assigns each byte the value `(unsigned char)c`.

#### `ft_bzero`

Sets memory to zero.

* Prototype: `void ft_bzero(void *s, size_t n);`
* Details: Equivalent to `ft_memset(s, 0, n)`.

#### `ft_memcpy`

Copies memory (no overlap protection).

* Prototype: `void *ft_memcpy(void *dst, const void *src, size_t n);`
* Details: Copies byte-by-byte from `src` to `dst`. Undefined behavior if regions overlap.

#### `ft_memmove`

Copies memory safely with overlap handling.

* Prototype: `void *ft_memmove(void *dst, const void *src, size_t len);`
* Details: Uses a temporary strategy to avoid corruption when memory overlaps.

#### `ft_memchr`

Searches memory for a byte.

* Prototype: `void *ft_memchr(const void *s, int c, size_t n);`
* Returns: Pointer to first occurrence or NULL.

#### `ft_memcmp`

Compares memory areas.

* Prototype: `int ft_memcmp(const void *s1, const void *s2, size_t n);`
* Returns: Difference between first differing bytes.

---

### String Functions

#### `ft_strlen`

* Prototype: `size_t ft_strlen(const char *s);`
* Returns: Length of string excluding null terminator.

#### `ft_strdup`

* Prototype: `char *ft_strdup(const char *s1);`
* Details: Allocates memory and duplicates string.

#### `ft_strlcpy`

* Prototype: `size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);`
* Details: Copies string with size limit and ensures null termination.

#### `ft_strlcat`

* Prototype: `size_t ft_strlcat(char *dst, const char *src, size_t dstsize);`
* Details: Appends string safely.

#### `ft_strchr`

* Prototype: `char *ft_strchr(const char *s, int c);`
* Details: Finds first occurrence of character.

#### `ft_strrchr`

* Prototype: `char *ft_strrchr(const char *s, int c);`
* Details: Finds last occurrence.

#### `ft_strncmp`

* Prototype: `int ft_strncmp(const char *s1, const char *s2, size_t n);`
* Details: Compares up to `n` characters.

#### `ft_strnstr`

* Prototype: `char *ft_strnstr(const char *haystack, const char *needle, size_t len);`
* Details: Searches substring within bounded length.

---

### Character Functions

#### `ft_isalpha`

Checks if character is alphabetic.

#### `ft_isdigit`

Checks if numeric.

#### `ft_isalnum`

Checks if alphanumeric.

#### `ft_isascii`

Checks if ASCII.

#### `ft_isprint`

Checks if printable.

#### `ft_toupper`

Converts to uppercase.

#### `ft_tolower`

Converts to lowercase.

---

### Conversion Functions

#### `ft_atoi`

* Prototype: `int ft_atoi(const char *str);`
* Details: Converts string to integer, handling whitespace and sign.

#### `ft_itoa`

* Prototype: `char *ft_itoa(int n);`
* Details: Converts integer to string (allocated).

---

### Memory Allocation

#### `ft_calloc`

* Prototype: `void *ft_calloc(size_t count, size_t size);`
* Details: Allocates and zeroes memory safely (checks overflow).

---

### Advanced String Functions

#### `ft_substr`

Extracts a substring from a string.

#### `ft_strjoin`

Concatenates two strings into a new one.

#### `ft_strtrim`

Removes characters from beginning and end.

#### `ft_split`

Splits string into array of strings.

#### `ft_strmapi`

Applies function to each character.

---

### Output Functions

#### `ft_putchar_fd`

Writes a character to a file descriptor.

#### `ft_putstr_fd`

Writes a string.

#### `ft_putendl_fd`

Writes string followed by newline.

#### `ft_putnbr_fd`

Writes integer.

---

### Linked List Functions

#### `ft_lstnew`

Creates a new list node.

#### `ft_lstadd_front`

Adds node at beginning.

#### `ft_lstadd_back`

Adds node at end.

#### `ft_lstsize`

Returns number of nodes.

#### `ft_lstlast`

Returns last node.

#### `ft_lstdelone`

Deletes one node.

#### `ft_lstclear`

Deletes entire list.

#### `ft_lstiter`

Applies function to each node.

#### `ft_lstmap`

Creates new list from transformed nodes.

---

## Instructions

### Compilation

```bash
make
```

### Clean object files

```bash
make clean
```

### Full clean

```bash
make fclean
```

### Recompile

```bash
make re
```

### Usage

Include in your project:

```c
#include "libft.h"
```

Compile with:

```bash
cc main.c -L. -lft
```

---

## Resources

### Documentation

* The C Programming Language — Kernighan & Ritchie
* GNU C Library Documentation
* Linux `man` pages

### Tutorials

* Memory management in C
* Pointer fundamentals
* Linked list implementation

### AI Usage

AI tools were used for:

* Explaining complex concepts (memory, pointers, edge cases)
* Generating edge-case test scenarios
* Assisting with README documentation

All implementations were written, tested, and validated manually to ensure full understanding and compliance with 42 requirements.

---