#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*temporal;

	counter = 0;
	temporal = lst;
	while (temporal != NULL)
	{
		counter++;
		temporal = temporal->next;
	}
	return (counter);
}
