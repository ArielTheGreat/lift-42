#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	counter;
	size_t	counter2;
	size_t	ocurrence_int;

	counter = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (counter < len && haystack[counter] != '\0')
	{
		if (haystack[counter] == *needle)
		{
			counter2 = 0;
			ocurrence_int = counter;
			while (haystack[ocurrence_int] == needle[counter2]
				&& needle[counter2] != '\0' && ocurrence_int < len)
			{
				ocurrence_int++;
				counter2++;
			}
			if (needle[counter2] == '\0')
				return ((char *)haystack + counter);
		}
		counter++;
	}
	return (NULL);
}
