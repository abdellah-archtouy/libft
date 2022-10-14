/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:24:59 by aarchtou          #+#    #+#             */
/*   Updated: 2022/10/14 15:46:10 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;

	d = 0;
	c = ft_strlen(dst);
	if (dstsize <= (size_t)ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	while (src[d] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}
// int main()
// {
// 	char str[10] = "B";
// 	char str_2[] = "AAAAAAAA";
//     // printf("%zu", strlcat(str,str_2,3));
//     printf("%lu", ft_strlcat(str, str_2,0));
// 	printf("|%s|\n", str);
// }
