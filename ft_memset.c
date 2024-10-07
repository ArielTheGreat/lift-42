#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			a;
	unsigned char	x;

	a = 0;
	x = (unsigned char)c;
	if (x < 0 || x > 255)
		x = 0;
	while (a < len)
	{
		*((unsigned char *)b + a) = x;
		a++;
	}
	return (b);
}
