/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:27:34 by aarchtou          #+#    #+#             */
/*   Updated: 2022/10/17 13:36:51 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	chek_word(char const *a, char c)
{
	int	i;
	int	t;

	i = 0;
	t = 0;
	while (a[i])
	{
		while (a[i] && a[i] == c)
			i++;
		if (a[i] == 0)
			break ;
		t++;
		while (a[i] && a[i] != c)
			i++;
	}
	return (t);
}

char	**ft_chek(char const *s, char c, char **strings, int words_count)
{
	char	*sub;
	int		index;
	int		len;
	int		a;
	int		l;

	index = 0;
	a = 0;
	while (a < words_count)
	{
		while (s[index] && s[index] == c)
				index++;
			len = 0;
		while (s[len + index] && s[len + index] != c)
			len++;
		sub = (char *)malloc(sizeof(char) * (len + 1));
		l = 0;
		while (s[index] && s[index] != c)
			sub[l++] = s[index++];
		sub[l] = 0;
		strings[a++] = sub;
	}
	strings[a] = 0;
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	char	**strings;
	int		words_count;

	words_count = chek_word(s, c);
	strings = (char **)malloc(sizeof(char *) * (words_count + 1));
	ft_chek(s, c, strings, words_count);
	return (strings);
}

	// while (s[index])
	// {
	// 	while (s[index] && s[index] == c)
	// 		index++;
	// 	len = 0;
	// 	while (s[len + index] && s[len + index] != c)
	// 		len++;
	// 	if (len == 0 && s[len + index] == 0)
	// 		break ;
	// 	sub = (char *)malloc(sizeof(char) * (len + 1));
	// 	l = 0;
	// 	while (s[index] && s[index] != c)
	// 		sub[l++] = s[index++];
	// 	sub[l] = 0;
	// 	strings[a++] = sub;
	// }
// #include<stdio.h>

// int	main(void)
// {
// 	char	**p;
	
// 	p = ft_split("  abdo      art be le chd hcdbshbc bchd", ' ');
// 	printf("%s", p);
// }