#include <stdlib.h>

int	number_of_characters(const char *str)
{
	int	counter;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		counter++;
	}
	return (counter);
}

int	concatenate_strings(int counter, char const *str_origin, char *str_destiny)
{
	int	counter_char;
	int	counter2;

	counter_char = counter;
	counter2 = 0;
	while (*(str_origin + counter2) != '\0')
	{
		*(str_destiny + counter_char) = *(str_origin + counter2);
		counter_char++;
		counter2++;
	}
	return (counter_char);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		total_characters;
	char	*str_space;
	int		counter;

	total_characters = number_of_characters(s1) + number_of_characters(s2) + 1;
	str_space = (char *)malloc(total_characters * sizeof(char));
	if (str_space == NULL)
		return (NULL);
	counter = concatenate_strings(0, s1, str_space);
	counter = concatenate_strings(counter, s2, str_space);
	str_space[counter] = '\0';
	return (str_space);
}
