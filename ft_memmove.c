/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:14:24 by aarchtou          #+#    #+#             */
/*   Updated: 2022/10/22 16:53:07 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src1;
	char	*dst1;
	int		i;

	dst1 = (char *)dst;
	src1 = (char *)src;
	i = (int)len;
	if ((char *)src == NULL && (char *)dst1 == NULL)
		return (dst);
	if (dst1 >= src1)
	{
		i--;
		while (i >= 0)
		{
			dst1[i] = src1[i];
			i--;
		}
	}
	else
		ft_memcpy(dst1, src1, i);
	return (dst);
}	
