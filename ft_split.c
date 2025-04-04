/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:27:34 by aarchtou          #+#    #+#             */
/*   Updated: 2022/10/26 09:53:17 by aarchtou         ###   ########.fr       */
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

void	ft_free_all(char	**strings, int a)
{
	while (a >= 0)
	{
		free(strings[a]);
		a--;
	}
	return ;
}

char	**ft_chek(char const *s, char c, char **strings, int words_count)
{
	char	*sub;
	int		index;
	int		a;
	int		l;

	index = 0;
	a = 0;
	while (a < words_count)
	{
		while (s[index] && s[index] == c)
			index++;
		l = 0;
		while (s[l + index] && s[l + index] != c)
			l++;
		sub = (char *)malloc(sizeof(char) * (l + 1));
		if (!sub)
			ft_free_all(strings, a);
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

	if (s == 0)
		return (0);
	words_count = chek_word(s, c);
	strings = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (strings == 0)
		return (0);
	ft_chek(s, c, strings, words_count);
	return (strings);
}
