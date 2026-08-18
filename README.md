*This project has been created as part of the 42 curriculum by ebeka.*

# Libft

## Description

Libft is a C library developed as part of the 42 curriculum.

The goal of this project is to understand how commonly used C library functions work by reimplementing them from scratch and creating a personal library that can be reused in future C projects.

The project covers fundamental concepts of C programming, including:

* Memory management
* String manipulation
* Pointers
* Dynamic memory allocation
* File descriptors
* Function pointers
* Structures
* Linked lists

The final result is a static library named `libft.a`.

## Instructions

### Compilation

The project includes a `Makefile` that compiles the source files using:

```bash
cc -Wall -Wextra -Werror
```

To compile the library, run:

```bash
make
```

This creates the static library:

```text
libft.a
```

### Makefile Rules

The following commands are available:

```bash
make
```

Compiles the source files and creates `libft.a`.

```bash
make clean
```

Removes the generated object files.

```bash
make fclean
```

Removes the object files and the `libft.a` library.

```bash
make re
```

Runs `fclean` and recompiles the entire library.

### Using Libft

Include the header in your C program:

```c
#include "libft.h"
```

Then compile your program together with the library:

```bash
cc main.c libft.a
```

Example:

```c
#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	*str;

	str = ft_strdup("Hello, 42!");
	if (str == NULL)
		return (1);
	printf("%s\n", str);
	free(str);
	return (0);
}
```

## Library Details

Libft is divided into three main parts:

1. Reimplementations of standard C library functions.
2. Additional utility functions.
3. Linked list manipulation functions.

### Part 1 - Libc Functions

These functions reproduce the behavior of functions from the standard C library using the `ft_` prefix.

#### Character Checking

* `ft_isalpha`
* `ft_isdigit`
* `ft_isalnum`
* `ft_isascii`
* `ft_isprint`

#### Character Conversion

* `ft_toupper`
* `ft_tolower`

#### String Functions

* `ft_strlen`
* `ft_strlcpy`
* `ft_strlcat`
* `ft_strchr`
* `ft_strrchr`
* `ft_strncmp`
* `ft_strnstr`
* `ft_strdup`

#### Memory Functions

* `ft_memset`
* `ft_bzero`
* `ft_memcpy`
* `ft_memmove`
* `ft_memchr`
* `ft_memcmp`
* `ft_calloc`

#### Conversion

* `ft_atoi`

### Part 2 - Additional Functions

These functions provide utilities that are either not part of libc or exist there in a different form.

* `ft_substr` - Creates a substring from a string.
* `ft_strjoin` - Concatenates two strings into a newly allocated string.
* `ft_strtrim` - Removes specified characters from the beginning and end of a string.
* `ft_split` - Splits a string into an array of strings using a delimiter.
* `ft_itoa` - Converts an integer into a string.
* `ft_strmapi` - Applies a function to every character of a string and creates a new string.
* `ft_striteri` - Applies a function directly to every character of a string.
* `ft_putchar_fd` - Writes a character to a file descriptor.
* `ft_putstr_fd` - Writes a string to a file descriptor.
* `ft_putendl_fd` - Writes a string followed by a newline to a file descriptor.
* `ft_putnbr_fd` - Writes an integer to a file descriptor.

### Part 3 - Linked Lists

The project also introduces singly linked lists using the following structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

The `content` member stores the data contained in the node, while `next` stores the address of the next node or `NULL` when the current node is the last node.

The following functions are provided for linked list manipulation:

* `ft_lstnew` - Creates a new list node.
* `ft_lstadd_front` - Adds a node to the beginning of a list.
* `ft_lstsize` - Counts the number of nodes in a list.
* `ft_lstlast` - Returns the last node of a list.
* `ft_lstadd_back` - Adds a node to the end of a list.
* `ft_lstdelone` - Deletes and frees a single node.
* `ft_lstclear` - Deletes and frees a node and all of its successors.
* `ft_lstiter` - Applies a function to the content of every node.
* `ft_lstmap` - Creates a new list by applying a function to every node's content.

## Resources

### References

The following resources were used to understand the behavior of the functions and concepts implemented in this project:

* 42 Libft project subject
* Linux manual pages (`man`)
* C standard library documentation
* Manual pages for functions such as `malloc`, `free`, `strlen`, `memcpy`, `memmove`, and other libc functions

Useful commands for consulting the manual pages include:

```bash
man 3 strlen
man 3 memcpy
man 3 malloc
man 3 free
```

### AI Usage

AI was used as a learning and support tool during the development of this project.

It was used for:

* Clarifying the expected behavior of standard C library functions.
* Understanding pointers, pointer arithmetic, and memory operations.
* Understanding dynamic memory allocation and proper memory management.
* Understanding function pointers and their use in functions such as `ft_strmapi`, `ft_striteri`, `ft_lstiter`, and `ft_lstmap`.
* Understanding the `t_list` structure and linked list operations.
* Reviewing code logic and helping identify syntax, memory-management, and logical errors.
* Explaining compiler errors and debugging approaches.
* Understanding the structure and behavior of the Makefile.
* Reviewing the project subject and README requirements.

AI was used primarily to explain concepts and review implementations while learning the underlying behavior of the functions.
