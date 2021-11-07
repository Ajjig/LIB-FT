#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr;

    ptr = b;
    while(len--)
    {
        *ptr++ = (unsigned char) c;
    }
    return(b);
}