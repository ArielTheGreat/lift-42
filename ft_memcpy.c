#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t	counter;

	counter = 0;
	if (!dst && !src)
		return (NULL);
	while (counter < n)
	{
		((char *) dst)[counter] = ((const char *) src)[counter];
		counter++;
	}
	return (dst);
}
