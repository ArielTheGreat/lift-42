#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			counter;
	unsigned char	uc;

	counter = 0;
	uc = (unsigned char)c;
	while (counter < n)
	{
		if (uc == *((unsigned char *)s + counter))
			return ((void *)s + counter);
		counter++;
	}
	return (NULL);
}
