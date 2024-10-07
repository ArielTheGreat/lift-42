#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	counter;

	counter = 0;
	while (s[counter] != '\0')
	{
		if (s[counter] == (char)c)
			return ((char *)s + counter);
		counter++;
	}
	if (s[counter] == (char)c)
		return ((char *)s + counter);
	return (NULL);
}
