#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	counter;
	size_t	counter2;

	counter = 0;
	counter2 = 0;
	while (src[counter2] != '\0')
	{
		counter2++;
	}
	if (dstsize < 1)
		return (counter2);
	while (src[counter] != '\0' && counter < dstsize - 1)
	{
		dst[counter] = src[counter];
		counter++;
	}
	dst[counter] = '\0';
	return (counter2);
}
