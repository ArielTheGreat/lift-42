#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			counter;
	unsigned char	character_first_str;
	unsigned char	character_second_str;

	counter = 0;
	while (counter < n)
	{
		character_first_str = *((unsigned char *)s1 + counter);
		character_second_str = *((unsigned char *)s2 + counter);
		if (character_first_str != character_second_str)
			return ((int)character_first_str - (int)character_second_str);
		counter++;
	}
	return (0);
}
