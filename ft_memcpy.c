/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:00:12 by aarchtou          #+#    #+#             */
/*   Updated: 2022/10/22 16:52:54 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s;
	char	*d;
	int		i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (dst == 0 && src == 0)
		return (0);
	while (n > 0)
	{
	d[i] = s[i];
		i++;
		n--;
	}
	return (d);
}
