#include <stdlib.h>
#include <libft.h>

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*list;

	if (!(list = malloc(sizeof(*list))))
		return (NULL);
	if (!(list->content = malloc(content_size)))
		return (NULL);
	ft_memcpy(list->content, content, content_size);
	list->content_size = content_size;
	list->next = NULL;
	return (list);
}
