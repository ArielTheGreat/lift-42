#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	counter;

	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		counter = len;
		while (counter > 0)
		{
			counter--;
			((unsigned char *)dst)[counter] = ((unsigned char *) src)[counter];
		}
	}
	else
	{
		counter = 0;
		while (counter < len)
		{
			((unsigned char *)dst)[counter] = ((unsigned char *) src)[counter];
			counter++;
		}
	}
	return (dst);
}
