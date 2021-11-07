#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	i;

	if (!count || !size)
	{
		count++;
		size++;
	}
	if (!(ptr = malloc(count * size)))
		return (NULL);
	i = 0;
	ft_bzero(ptr, count * size);
	return (ptr);
}