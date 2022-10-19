/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:17:24 by aarchtou          #+#    #+#             */
/*   Updated: 2022/10/19 11:24:38 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	char	*tmp;
	int		index;

	tmp = (char *)s;
	if (tmp == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
		len = 0;
	else if (ft_strlen(s) < len)
		len = ft_strlen(s);
	index = 0;
	ptr = (char *)malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	while (tmp[start] && len)
	{
		ptr[index++] = tmp[start++];
		len--;
	}
	ptr[index] = '\0';
	return (ptr);
}

// int main(int ac, char **av)
// {
// 	if(ac == 4)
// 	{
// 		int start = atoi(av[2]);
// 		int len = atoi(av[3]);
// 		printf("my = %s\n",ft_substr(av[1], start, len));
// 	}
// 	return 0;
// }
