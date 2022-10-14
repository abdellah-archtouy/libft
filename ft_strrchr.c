/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:05:00 by aarchtou          #+#    #+#             */
/*   Updated: 2022/10/14 11:20:30 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*s1;

	s1 = (char *)s;
	i = ft_strlen(s1);
	if (s1 == NULL)
		return (NULL);
	if ((unsigned char)c == 0)
	{
		if (s1[i] == (unsigned char)c)
			return (&s1[i]);
	}
	while (i-- > 0)
	{
		if (s1[i] == (unsigned char)c)
		{
			return (&s1[i]);
		}
	}
	if (*s1 == (unsigned char)c)
		return (s1);
	return (0);
}
// int main()
// {
//     char s[] = "tripouille";
// 	char s2[] = "ltripouiel";
// 	char s3[] = "";
//     printf("%s\n", strrchr(s,0));
//     printf("%s\n", ft_strrchr(s,0));
// }
