#include <stdlib.h>
char *ft_strdup(char *src)
{
	int len = 0;
	while(src[len]) len++;
	char *ret = malloc(sizeof(char) * (len + 1));
	len = 0;
	while (src[len])
	{
		ret[len] = src[len];
		len++;
	}
	return ret;
}
