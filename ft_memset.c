/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:16:36 by aarchtou          #+#    #+#             */
/*   Updated: 2022/10/12 12:31:48 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*s;

	i = 0;
	s = (char *)b;
	while (i < len)
	{
		s[i] = c;
		i++;
	}
	return (0);
}
// #include <stdio.h>

// int main()
// {
//     int i = 0;
//     int t = 0;
// 	int b[] = {1,2,3};
// 	int a[] = {1,2,3};
// 	ft_memset(b, '1', sizeof(int) * 3);
// 	while (b[i])
// 	{
// 		printf("%c" , b[i]);
// 		i++;
// 	}
// 		printf("\n");
// 	memset(b, '1', sizeof(int) * 3);
// 	while (b[t])
// 	{
// 		printf("%c" , a[t]);
// 		t++;
// 	}
// }
