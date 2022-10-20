/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarchtou <aarchtou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 09:01:36 by aarchtou          #+#    #+#             */
/*   Updated: 2022/10/19 15:13:40 by aarchtou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s == 0)
		return ;
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

// #include <fcntl.h>
// int	main(void)
// {
// 	int	f;

// 	// f = creat("ft_putchar_fd.c", 0644);
// 	f = open("abdo",O_WRONLY | O_CREAT, 0777);
// 	ft_putendl_fd("abdo med", f);
// }