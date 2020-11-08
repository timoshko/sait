#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int	i;
	int	j;
	char	*buf;

	i = 0;
	j = 0;
	if (s)
	{
		buf = malloc(sizeof(char) * len);
		if (buf == NULL)
			return (NULL);
		while (i != start)
			++i;
		while (len && s)
		{
			buf[j] = s[i];
			++j;
			++i;
			--len;
		}
	}
	return (buf);
}

int main()
{
	char s[5] = { 'q','e','w','r','y'};
	printf("%s", ft_substr(s, 2, 2));
}
