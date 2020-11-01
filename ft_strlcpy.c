#include <stdio.h>
#include <string.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned char	*buf1;
	unsigned char	*buf2;
	
	if (dst && src)
	{
		buf1 = (unsigned char*)dst;
		buf2 = (unsigned char*)src;
		--size;
		while (size)
		{
			*buf1 = *buf2;
			++buf1;
			--size;
			++buf2;
		}
		*buf1 = '\0';	
	}
	return (strlen(src));
}

int main()
{
	char b[6] =  {'1','2','3','4','5','6'};

	char c[6];
	//ft_strlcpy(c, b , 3);
	printf("%s",c);
	
}
