/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:53:45 by aarchtou          #+#    #+#             */
/*   Updated: 2022/10/14 16:23:34 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strdup(const char *s1)
// {
// 	const char	*ptr;
// 	int			i;
// 	int			a;

// 	i = ft_strlen(s1);
// 	a = 0;
// 	ptr = (char *)malloc(i * sizeof(char));
// 	while (s1[a])
// 	{
// 		ptr[a] = s1[a];
// 		a++;
// 	}
// 	if (a < i)
// 		return (NULL);
// 	return (ptr);
// }
char	*ft_strdup(const char *s1)
{
	char	*s2;

	s2 = (char *)malloc(ft_strlen(s1) + 1);
	if (s2 == NULL)
		return (0);
	ft_memcpy(s2, s1, ft_strlen(s1) + 1);
	return (s2);
}
