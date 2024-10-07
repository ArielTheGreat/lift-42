#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	counter;
	size_t	counter2;
	size_t	counter3;

	counter = 0;
	while (dst[counter] != '\0' & counter < dstsize)
		counter++;
	counter2 = 0;
	while (src[counter2] != '\0')
		counter2++;
	if (dstsize == 0)
		return (counter2);
	counter3 = (counter2 + counter);
	counter2 = 0;
	while (src[counter2] != '\0' && counter < (dstsize - 1))
	{
		dst[counter] = src[counter2];
		counter++;
		counter2++;
	}
	if (counter < dstsize)
		dst[counter] = '\0';
	return (counter3);
}
