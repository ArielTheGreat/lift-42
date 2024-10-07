#include <string.h>
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		counter;
	char	*str_dup;

	counter = 0;
	while (s1[counter] != '\0')
		counter++;
	counter++;
	str_dup = malloc(counter * sizeof(char));
	if (str_dup == NULL)
		return (NULL);
	counter = 0;
	while (s1[counter] != '\0')
	{
		str_dup[counter] = s1[counter];
		counter++;
	}
	str_dup[counter] = '\0';
	return (str_dup);
}
