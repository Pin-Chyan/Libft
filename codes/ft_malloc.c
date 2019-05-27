
#include "libft.h"

void	*ft_malloc(size_t size)
{
	void	*mem;

	mem = malloc(size);
	if (!mem)
		return(NULL);
	ft_bzero(mem, size);
	return (mem);
}
