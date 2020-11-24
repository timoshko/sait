//#include <stdlib.h>
#include "libft.h"
//при собрании библиотеки заменить strlen на ft_strlen
int static	have_symbol(char s, char const *set)
{
	int		i;

	i = 0;
	while(set[i] != '\0')
	{
		if (set[i] == s)
			return (0);
		++i;
	}
	return (1);
}

char	*ft_strtrim(char const *s, char const *set)
{
	int		i;
	int		j;
	char	*res;

	i = 0;
	j = 0;
	res = malloc(ft_strlen(s));
	while (s[i] != '\0')
	{
		if (have_symbol(s[i], set) == 1)
		{
			res[j] = s[i];
			++j;
		}
		++i;
	}
	return (res);
}
/*
int main()
{
	char s1[] = "LYYYoop";
	char s2[] = "Yuuo";
	char *s = NULL;
	
	printf("%s\n",s = ft_strtrim(s1, s2));
	free(s);
}*/
