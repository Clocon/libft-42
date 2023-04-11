# LIBFT

This is my implementation of the libft project for the Cursus 42 program. Libft is a library of custom C functions that replicate some of the functionality of standard library functions, as well as providing additional useful functions.

The functions in this library can be used in other C programs to simplify and speed up development.

![image](https://user-images.githubusercontent.com/113030191/225895352-884ab699-f5d9-45fb-924e-eb3c271760d9.png)

## Mandatory Part

<p align="center">
<img width="617" alt="image" src="https://user-images.githubusercontent.com/113030191/225895640-d3876e39-78a0-42ee-8857-874a29c9e53e.png">
</p>

### Functions to replicate
• [isalpha](./ft_isalpha.c)
• [isdigit](./ft_isdigit.c)
• [isalnum](./ft_isalnum.c)
• [isascii](./ft_isascii.c)
• [isprint](./ft_isprint.c)
• [strlen](./ft_strlen.c)
• [memset](./ft_memset.c)
• [bzero](./ft_bzero.c)
• [memcpy](./ft_memcpy.c)
• [memmove](./ft_memmove.c)
• [strlcpy](./ft_strlcpy.c)
• [strlcat](./ft_strlcat.c)
• [toupper](./ft_toupper.c)
• [tolower](./ft_tolower.c)
• [strchr](./ft_strchr.c)
• [strrchr](./ft_strrchr.c)
• [strncmp](./ft_strncmp.c)
• [memchr](./ft_memchr.c)
• [memcmp](./ft_memcmp.c)
• [strnstr](./ft_strnstr.c)
• [atoi](./ft_atoi.c)
• [calloc](./ft_calloc.c)
• [strdup](./ft_strdup.c)
• [ft_substr](./ft_substr.c)
• [ft_strjoin](./ft_strjoin.c)
• [ft_strtrim](./ft_strtrim.c)
• [ft_split](./ft_split.c)
• [ft_itoa](./ft_itoa.c)
• [ft_strmapi](./ft_strmapi.c)
• [ft_striteri](./ft_striteri.c)
• [ft_putchar_fd](./ft_putchar_fd.c)
• [ft_putstr_fd](./ft_putstr_fd.c)
• [ft_putendl_fd](./ft_putendl_fd.c)
• [ft_putnbr_fd](./ft_putnbr_fd.c)

## Bonus part

The bonus rule created in the Makefile allows to compile the functions to manipulate linked lists.
The defnition of the struct is:

<p align="center">
  <img width="288" alt="Screen Shot 2023-03-16 at 6 05 58 PM" src="https://user-images.githubusercontent.com/113030191/225902966-4adb0d5c-7bcd-4609-adde-ed30c621a2ca.png">
</p>

All the bonus functions are named like ft_function_bonus.c

#### Functions to replicate

• [ft_lstnew](./ft_lstnew_bonus.c)
• [ft_lstadd_front](./ft_lstadd_front_bonus.c)
• [ft_lstsize](./ft_lstsize_bonus.c)
• [ft_lstlast](./ft_lstlast_bonus.c)
• [ft_lstadd_back](./ft_lstadd_back_bonus.c)
• [ft_lstdelone](./ft_lstdelone_bonus.c)
• [ft_lstclear](./ft_lstclear_bonus.c)
• [ft_lstiter](./ft_lstiter_bonus.c)
• [ft_lstmap](./ft_lstmap_bonus.c)

## Usage

To compile the libft library, run the following command: **make**.

This will compile the library as **libft.a**, which can be linked with other C programs.

To use the library functions in a program, include the **libft.h** header file and link with the **libft** library

## Links to my other projects at 42:

- **[Main Page](../../../Clocon)**
- **[ft_printf](../../../ft_printf-42)**
- **[get_next_line](../../../get_next_line-42)**
- **[pipex](../../../pipex-42)**
- **[push_swap](../../../push_swap-42)**
- **[so_long](../../../so_long-42)**
