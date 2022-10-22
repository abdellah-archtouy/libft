/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 11:11:09 by aarchtou          #+#    #+#             */
/*   Updated: 2022/10/21 17:51:29 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		b;
	long	r;

	i = 0;
	r = 0;
	b = 1;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == ' '
		|| str[i] == '\r' || str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			b = b * (-1);
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * b);
}
int main()
{
	printf("%d\n" , ft_atoi("-214748364900000000"));
	printf("%d" , atoi("-214748364900000000"));
}
