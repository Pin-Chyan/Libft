

#include "libft.h"

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	del((*lst)->content, (*lst)->content_size);
	free(*alst);
	*alst = NULL;
}
