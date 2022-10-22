/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:28:10 by aarchtou          #+#    #+#             */
/*   Updated: 2022/10/21 15:16:21 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <strings.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# define MAX 18446744073709551615UL

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

char	*ft_itoa(int n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isdigit(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
int		ft_atoi(const char *str);
size_t	ft_strlen( const char *c);
t_list	*ft_lstnew(void *content);
char	*ft_strdup(const char *s1);
void	ft_bzero(void *b, size_t c);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putstr_fd(char *str, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr( const char *s, int c);
char	*ft_strrchr( const char *s, int c);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_calloc( size_t count, size_t size);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(void *));
void	*ft_memchr( const void *s, int c, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_memcmp( const void *a, const void *b, size_t n);
int		ft_strncmp( const char *a, const char *b, size_t n);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_substr(char const *s, unsigned int start, size_t len);
t_list	*ft_lstmap(t_list *lst, void*(*f)(void *), void (*del)(void *));
char	*ft_strnstr( const char *str, const char *to_find, size_t len);

#endif