/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juperez <juperez@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 19:32:54 by juperez           #+#    #+#             */
/*   Updated: 2024/06/11 22:11:08 by juperez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdbool.h>
# include <limits.h>
# include <stdint.h>
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdio.h>

/* Base defines */
# define PRE "0x"
# define B02 "01"
# define B08 "01234567"
# define B10 "0123456789"
# define B16 "0123456789abcdef"
# define B32 "0123456789abcdefghijklmnopqrstuv"
# define B64 "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"

/* Buffer size */
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 64
# endif
# if BUFFER_SIZE < 0
#  undef BUFFER_SIZE
#  define BUFFER_SIZE 0
# endif

/* Linked list structure */
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/* ASCII functions */
bool	ft_isalpha(int c);
bool	ft_isdigit(int c);
bool	ft_isalnum(int c);
bool	ft_isascii(int c);
bool	ft_isprint(int c);
bool	ft_isspace(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
/* Memory allocation functions */
void	*ft_calloc(size_t e, size_t n);
void	*ft_realloc(void *p, size_t old, size_t new);
void	ft_mfree(char **tab, size_t n);
/* Memory functions */
int		ft_memcmp(void *s1, void *s2, size_t n);
void	*ft_memchr(void *s, int c, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_memcpy(void *d, void *s, size_t n);
void	*ft_memmove(void *d, void *s, size_t n);
void	ft_bzero(void *s, size_t n);
/* String functions */
int		ft_strncmp(char *s1, char *s2, size_t n);
size_t	ft_strlen(char *s);
size_t	ft_strllen(char *s, int c);
size_t	ft_strcount(char *s, int c);
size_t	ft_strlcpy(char *d, char *s, size_t n);
size_t	ft_strlcat(char *d, char *s, size_t n);
char	*ft_strchr(char *s, int c);
char	*ft_strrchr(char *s, int c);
char	*ft_strnstr(char *s1, char *s2, size_t n);
char	*ft_strtolower(char *s);
char	*ft_strtoupper(char *s);
char	*ft_strdup(char *s);
char	*ft_strldup(char *s, size_t n);
char	*ft_substr(char *s, size_t start, size_t n);
char	*ft_strtrim(char *s1, char *s2);
char	*ft_strjoin(char *s1, char *s2);
char	**ft_split(char *s, char c);
char	*ft_strmapi(char *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
/* Math functions */
size_t	ft_abs(ssize_t n);
size_t	ft_snlen(ssize_t n, size_t base);
size_t	ft_unlen(size_t n, size_t base);
ssize_t	ft_atol(char *s);
ssize_t	ft_atol_base(char *s, char *base);
char	*ft_ltoa(ssize_t n);
char	*ft_ltoa_base(ssize_t n, char *base);
/* Write functions */
ssize_t	ft_putchar(char c, int fd);
ssize_t	ft_putnchar(char c, int fd, size_t n);
ssize_t	ft_putstr(char *s, int fd);
ssize_t	ft_putlstr(char *s, int fd, size_t n);
ssize_t	ft_putendl(char *s, int fd);
ssize_t	ft_putnbr(ssize_t n, int fd);
/* Linked list functions */
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
size_t	ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
/* get_next_line */
char	*get_next_line(int fd);

#endif
