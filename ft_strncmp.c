#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	if ((*s1 == '\0' || *s2 == '\0') && n > 0)
		return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
	else if (n == 0)
		return (0);
	while (counter < n - 1 && s1[counter] != '\0' && s2[counter] != '\0')
	{
		if (s1[counter] != s2[counter])
			return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
		counter++;
	}
	if ((*s1 != '\0' || *s2 != '\0') && n > 0)
		return ((unsigned char)s1[counter] - (unsigned char)s2[counter]);
	return (0);
}
