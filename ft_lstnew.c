#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*p_new_node;

	p_new_node = (t_list *)malloc(sizeof(t_list));
	if (p_new_node == NULL)
		return (NULL);
	p_new_node->content = content;
	p_new_node->next = NULL;
	return (p_new_node);
}
