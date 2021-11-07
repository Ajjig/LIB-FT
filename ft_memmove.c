#include "libft.h"
 
void        *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *new_dest;
    unsigned char *new_src;

    new_src = (unsigned char *) src;
    new_dest = (unsigned char *) dest;
    if (dest == NULL && src == NULL)
        return (NULL);
    if (dest < src)
        ft_memcpy(dest, src, n);
    else
        while (n--)
            new_dest[n] = new_src[n];
    return (dest);
}