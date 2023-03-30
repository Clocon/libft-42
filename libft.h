/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumorale <lumorale@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 16:46:35 by lumorales         #+#    #+#             */
/*   Updated: 2023/03/10 13:11:44 by lumorale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 3
# endif

# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>
# include <fcntl.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_strlen(const char *str);
void	*ft_memset(void *s, int c, size_t n);
int		ft_strlcpy(char *dst, char *src, size_t size);
int		ft_strlcat(char *dst, char *src, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, void *src, size_t n);
void	*ft_memmove(void *dest, void *src, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(char *s, int c);
char	*ft_strrchr(char *s, int c);
int		ft_strncmp(char *s1, char *s2, size_t n);
int		ft_atoi(char *nptr);
void	*ft_memchr(void *s, int c, size_t n);
char	*ft_strnstr(char *big, char *little, size_t len);
int		ft_memcmp(void *s1, void *s2, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(char *s);
char	*ft_substr(char *s, int start, int len);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strtrim(char *s1, char *set);
char	**ft_split(char *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),	void (*del)(void *));
int		ft_printf(char *str, ...);
void	ft_putchar_counter(int c, int *counter);
void	ft_putstr(char *str, int *counter);
char	*ft_itoa_unsigned(unsigned int n);
char	*ft_hexa(unsigned long nb, char *hexa);
char	*get_next_line(int fd);
char	*ft_next_line(char *str);
char	*ft_get_line(char *str);
char	*ft_read_file(int fd, char *str);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memcpy(void *dest, void *src, size_t n);
char	*ft_strchr(char *s, int c);
#endif