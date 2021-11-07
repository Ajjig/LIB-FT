#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	char *new_src;

	new_src = (char *) src;
	i = 0;
	if(!size)
		return(ft_strlen(new_src));
	while (i < size - 1 && new_src[i])
	{
		dest[i] = new_src[i];
		i++;
	}
	dest[i] = 0;
	i = ft_strlen(new_src);
	return (i);
}
