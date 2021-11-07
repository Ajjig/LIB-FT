#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *dst;

    if (dest == NULL && src == NULL)
        return(NULL);
    dst = (unsigned char *) dest;
    while (n--)
        *dst++ = *(unsigned char *)src++;
    return (dest);
}

