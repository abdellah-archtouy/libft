/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:14:24 by aarchtou          #+#    #+#             */
/*   Updated: 2022/10/12 10:37:19 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, int len)
{
	char	*src1;
	char	*dst1;
	int		l;

	dst1 = (char *)dst;
	src1 = (char *)src;
	l = ft_strlen(dst) - len;
	l = ft_strlen(dst) - l;
	if ((char *)src == NULL || (char *)dst1 == NULL)
		return (NULL);
	if (dst1 >= src1)
	{
		while (l-- > 0)
			dst1[l] = src1[l];
	}
	else
		ft_memcpy(dst1, src1, len);
	return (dst);
}	
/*len--;
	while (len >= 0)
	{
		dst1[len] = src1[len];
		len--;
	}*/
// int main ()
// {
// char dst[100] = "abdollah";
// char src[100] = "abdollah";
// // printf("or = %lu\n", strlen(src+2));
// printf("my = %s\n",ft_memmove(src+2, src, 2));
// printf("or = %s\n", memmove(dst+2,dst, 2));
// }
