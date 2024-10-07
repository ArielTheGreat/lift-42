#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p_next;
	t_list	*p_current;

	p_current = *lst;
	while (p_current != NULL)
	{
		p_next = p_current->next;
		ft_lstdelone(p_current, del);
		p_current = p_next;
	}
	*lst = NULL;
}
