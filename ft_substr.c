#include <stdlib.h>
#include "libft.h"

char	*create_empty_string(void)
{
	char	*substr;

	substr = (char *)malloc(sizeof(char));
	if (substr == NULL)
		return (NULL);
	*(substr) = '\0';
	return (substr);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	counter2;
	size_t	length_s;

	length_s = ft_strlen(s);
	if (start >= length_s)
		return (create_empty_string());
	if (len > length_s - start)
		len = length_s - start;
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == NULL)
		return (NULL);
	length_s = 0;
	counter2 = start;
	while (length_s < len && *((char *)s + counter2) != '\0')
	{
		*(substr + length_s) = *((char *)s + counter2);
		length_s++;
		counter2++;
	}
	substr[length_s] = '\0';
	return (substr);
}
