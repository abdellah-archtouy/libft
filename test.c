// // #include "libft.h"
// int	ft_isalnum(int c)
// {
// 	if ((ft_isalpha(c) == 1) || (ft_isdigit(c) == 1))
// 		return (1);
// 	return (0);
// }
// // int	ft_atoi(char *str)
// // {
// // 	int	a;
// // 	int	b;
// // 	int	r;
// // 	a = 0;
// // 	b = 1;
// // 	r = 0;
// // 	while (str[a] == '\n' || str[a] == '\t' || str[a] == '\r'
// // 		||str[a] == '\f' || str[a] == '\v' || str[a] == ' ')
// // 		a++;
// // 	while (str[a] == '+' || str[a] == '-')
// // 	{
// // 		if (str[a] == '-')
// // 			b = b * (-1);
// // 		a++;
// // 	}
// // 	while (str[a] && str[a] >= '0' && str[a] <= '9')
// // 	{
// // 		r = r * 10 + (str[a] - '0');
// // 			a++;
// // 	}
// // 	return (r * b);
// // }
// #include <stdio.h>
// #include <strings.h>
// #include "libft.h"
// int main ()
// {
// int i = 0;
// char s[] = "llah";
// char d[] = "abdo";
// memmove(d,s,2);
// while (*d)
// {
// 	printf("%c", d[i]);
// 	i++;
// }
// char b[100] = "Geeks";
// printf("%s",memmove(b, "Quiz", sizeof(b)));
// }
// #include <stdio.h>
// if we uncomment the below line then the program will print AGE in the output.
//  #define AGE 18
// int main()
// {
// 	// if `AGE` is defined then print the `AGE` else print "Not Defined"
// 	#ifdef AGE
// 		printf("Age is %d", AGE);
// 	#else
// 		printf("Not Defined");
// 	#endif
// 	return 0;
// }
// void *ft_memchr(const void *s, int c, size_t n)
// {
//     	char	*s1;
// 	s1 = (char *)s;
// 	while (*s1 && n < 0)
// 	{
// 		if (*s1 == c)
// 			return (s1);
// 		s1++;
//         // n--;
// 	}
// 	return (0);
// }
// int main()
// {
// 	// printf("%s\n",memchr("abo abdo",'d',8));
// 	printf("%s",ft_memchr("abo abdo",'d',8));
// }
#include <stdio.h>
// int	ft_memcmp(const void *s1, const void *s2, size_t n)
// {
// 	size_t	i;
// 	size_t	h;
// 	char	*a;
// 	char	*b;

// 	i = 0;
// 	h = 0;
// 	a = (char *)s1;
// 	b = (char *)s2;
// 	while (a[i] == b[h] && i < n)
// 	{
// 		// if (a[i] != b[h])
// 		// 	return (a[i] - b[h]);
// 		i++;
// 		h++;
// 	}
// 	return (a[i] - b[h]);
// }
// int	ft_strncmp(char	*s1, char	*s2, unsigned int n)
// {
// 	unsigned int	a;
// 	if (n == 0)
// 		return (0);
// 	a = 0;
// 	while (s1[a] && s2[a] && a < (n - 1) && s1[a] == s2[a])
// 		a++;
// 	return (s1[a] - s2[a]);
// }
// int ft_memcmp(const void *a, const void *b, size_t n)
// {
// 	char	*s1;
// 	char	*s2;
// 	size_t	i;
// 	i = 0;
// 	s1 = (char	*)a;
// 	s2 = (char	*)b;
// 	if (n == 0)
// 		return (0);
// 	while (s1[i] && s2[i] && i < (n - 1) && s1[i] == s2[i])
// 		i++;
// 	if ((s1[i] - s2[i]) == 0)
// 		return (0);
// 	else if ((s1[i] - s2[i]) > 0)
// 			return (1);
// 		else 
// 		return (-1);
// 		}
// // int main()
// // {
// //     // printf("%d\n",memcmp("abdo abdo","aado",1));
// //     printf("%d\n",ft_memcmp("abdo abdo","aado",1));
// // }
