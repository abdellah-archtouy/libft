/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:00:12 by aarchtou          #+#    #+#             */
/*   Updated: 2022/10/10 19:01:45 by aarchtou         ###   ########.fr       */
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
	while (n > 0)
	{
	d[i] = s[i];
		i++;
		n--;
	}
	return (d);
}
// int main()
// {
//     char str[] = "mohcine";
//     char des[] = "ghalmi";
//     // printf("%s\n" , ft_memcpy(des, str, 5));
//     // printf("%s" , memcpy(des, str, 9));
// }
