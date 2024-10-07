#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int		counter;
	char	newline;

	counter = 0;
	while (*(s + counter) != '\0')
	{
		write(fd, s + counter, 1);
		counter++;
	}
	newline = '\n';
	write(fd, &newline, 1);
}
