/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   teet.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:27:22 by aarchtou          #+#    #+#             */
/*   Updated: 2022/10/16 11:03:32 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include "libft.h"

// char	*ft_itoa(int n)
// {
// 	int		i;
// 	int		a;
// 	char	*ptr;

// 	i = 0;
// 	a = n;
// 	while (a > 0 || a < 0)
// 	{
// 		a = a / 10;
// 		i++;
// 	}
// 	ptr = (char *)malloc(sizeof(char) * i);
// 	if (ptr == 0)
// 		return (0);
// 	ptr[i] = '\0';
// 	while (n > 0)
// 		ptr[i--] = n % 10 + 48;
// 	if (n < 0)
// 	{
// 		while (n < 0)
// 			ptr[i--] = n % 10 + 48;
// 		ptr[0] = '-';
// 	}
// 	return (ptr);
// }
// int main()
// {
// 	printf("%s", ft_itoa(1));
// }
