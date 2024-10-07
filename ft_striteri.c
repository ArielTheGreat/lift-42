#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	counter;

	counter = 0;
	while (*(s + counter) != '\0')
	{
		f(counter, s + counter);
		counter++;
	}
}
