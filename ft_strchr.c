/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 08:24:16 by aarchtou          #+#    #+#             */
/*   Updated: 2022/10/13 16:09:38 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr( const char *s, int c)
{
	char	*s1;

	s1 = (char *)s;
	if (s1 == NULL)
		return (NULL);
	while (*s1)
	{
		if (*s1 == (unsigned char)c)
			return (s1);
		s1++;
	}
	if (*s1 == (unsigned char)c)
		return (s1);
	return (0);
}
// int main()
// {
// 	char s[] = "tripouille";
//     printf("%s\n", ft_strchr(s, 0));
//     // printf("%s\n", strchr(s, 0));
// 	// // title("ft_strchr\t: ")
// 	// /* 1 */ check(ft_strchr(s, 't') == s); showLeaks();
// 	// /* 2 */ check(ft_strchr(s, 'l') == s + 7); showLeaks();
// 	// /* 3 */ check(ft_strchr(s, 'z') == 0); showLeaks();
// 	// /* 4 */ check(ft_strchr(s, 0) == s + strlen(s)); showLeaks();
// 	// /* 5 */ check(ft_strchr(s, 't' + 256) == s); showLeaks();
// }