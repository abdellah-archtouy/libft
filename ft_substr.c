/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:17:24 by aarchtou          #+#    #+#             */
/*   Updated: 2022/10/24 16:26:00 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*tmp;
	int		index;

	tmp = (char *)s;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	else if (ft_strlen(s) < len)
		len = ft_strlen(s);
	index = 0;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	while (len && tmp[start])
	{
		ptr[index++] = tmp[start++];
		len--;
	}
	ptr[index] = '\0';
	return (ptr);
}
