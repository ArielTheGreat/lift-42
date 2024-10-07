#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	int	counter;

	counter = 0;
	while (*(s + counter) != '\0')
	{
		write(fd, s + counter, 1);
		counter++;
	}
}
