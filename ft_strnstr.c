/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:42:56 by aarchtou          #+#    #+#             */
/*   Updated: 2022/10/16 11:53:34 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// int	check_word(char *str, char *to_find, int len)
// {
// 	while (*str && *to_find && len--)
// 	{
// 		if (*str != *to_find)
// 			return (0);
// 		str++;
// 		to_find++;
// 	}
// 	if (*to_find == '\0')
// 		return (1);
// 	return (0);
// }

// char	*ft_strnstr(const char *str, const char *to_find, size_t len)
// {
// 	size_t	i;
// 	char	*w;
// 	char	*to_find2;

// 	i = 0;
// 	w = (char *)str;
// 	to_find2 = (char *)to_find;
// 	if (*to_find == '\0')
// 		return (w);
// 	while (w[i] != '\0' && i < len)
// 	{
// 		if (w[i] == to_find2[0])
// 		{
// 			if (check_word (&w[i], to_find2, ft_strlen(to_find2)) == 1)
// 				return (&w[i]);
// 		}
// 		i++;
// 	}
// 	return (0);
// }
char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (s2[0] == '\0')
		return ((char *)s1);
	while (s1[h] != '\0')
	{
		n = 0;
		while (s1[h + n] == s2[n] && (h + n) < len)
		{
			if (s1[h + n] == '\0' && s2[n] == '\0')
				return ((char *)&s1[h]);
			n++;
		}
		if (s2[n] == '\0')
			return ((char *)s1 + h);
		h++;
	}
	return (0);
}
// int main ()
// {
// 	char haystack[30] = "aaabcabcd";
// 	printf("%s",ft_strnstr(haystack, "ab",8));
// }
