/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 10:04:14 by aarchtou          #+#    #+#             */
/*   Updated: 2022/10/14 13:03:48 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
	{
		return (ft_strlen(src));
	}
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
	if (dst[0] == '\0')
		return (ft_strlen(src));
}
// int main()
// {
//     char s[] = "coucou";
//     char b[10] = "a";
//     printf("%zu\n", ft_strlcpy(b,"1",0));
//     // printf("%zu\n", strlcpy(b,"1",0));
//     // printf("%zu\n", strlcpy(b,s,7));
//     printf("%s", b);
// }
