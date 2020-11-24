/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: whorse <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 18:56:15 by whorse            #+#    #+#             */
/*   Updated: 2020/11/17 17:24:21 by whorse           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
//#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;
	size_t	res;


	l = 0;
	b = 0;
	while (big[b] && b < len)
	{
		if (b == len)
			return (NULL);
		if (little[l] == big[b])
		{
			res = b;
			while (big[++b] == little[++l] && big[b] && b < len);
			if (little[l] == '\0')
				return ((char *)(big + res));
			if (big[b] == '\0' && little[l] != '\0')
				return (NULL);
			if (big[b] == '\0' || b == len - 1)
				b = res;
		}
		b++;
		l = 0;
	}
	return ((char *)big);
}
//int main()
//{
	//printf("%s",(char *) NULL);
//	printf("%s\n", ft_strnstr("Good bue blue sky", "sky", 20));
	//printf("%s\n", ft_strnstr("Good bue blue sky", "sky", 2));
	//printf("%s\n", ft_strnstr("Good bue blue sky", "Good bue blue sky, fuck", 20));
//	printf("%s\n", ft_strnstr("lolo", "", 20));
//	printf("%s\n",ft_strnstr("Good bue blue sky", "Good bue blue sky", 20));
//}
