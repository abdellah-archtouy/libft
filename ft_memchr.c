/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:04:13 by aarchtou          #+#    #+#             */
/*   Updated: 2022/10/13 15:32:53 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	while (n > 0)
	{
		if (*s1 == (unsigned char)c)
			return (s1);
		s1++;
		n--;
	}
	return (0);
}
// int main()
// {
// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
//     printf("%s\n",memchr(s,0,8));
//     printf("%s\n",ft_memchr(s,0,8));
// }
