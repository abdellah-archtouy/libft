/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:28:10 by aarchtou          #+#    #+#             */
/*   Updated: 2022/10/14 16:19:34 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:14:26 by aarchtou          #+#    #+#             */
/*   Updated: 2022/10/10 09:28:00 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <strings.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *b, size_t c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_strlen( const char *c);
void	ft_putnbr_fd(int nb, int fd);
void	ft_putstr_fd(char *str, int fd);
void	ft_putchar_fd(char c, int fd);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
int		ft_memcmp( const void *a, const void *b, size_t n);
int		ft_strncmp( const char *a, const char *b, size_t n);
char	*ft_strdup(const char *s1);
char	*ft_strrchr( const char *s, int c);
char	*ft_strchr( const char *s, int c);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_calloc( size_t count, size_t size);
void	*ft_memchr( const void *s, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, int len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strnstr( const char *str, const char *to_find, size_t len);

#endif