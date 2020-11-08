#include <stdlib.h>
#include <string.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	int	j;
	char	*res;

	i = 0;
	j = 0;
	if (s1 && s2)
	{
		res = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);
		if (res == NULL)
			return (NULL);
		while (s1[i])
		{
			res[j] = s1[i];
			++i;
			++j;
		}
		i = 0;
		while (s2[i])
		{
			res[j] = s2[i];
			++i;
			++j;
		}

	}
	res[j] = '\0';
	return (res);
}

int main()
{
	char s1[] = "Loo";
	char s2[] = "Looool";
	char *s = NULL;
	
	printf("%s\n",s = ft_strjoin(s1, s2));
	free(s);
}
