#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    unsigned char ch;

    ch = (unsigned char) c;
    str = (unsigned char *)s;
    while(n--)
    {
        if (*str == ch)
            return(str);
        str++;
    }
    return(NULL);
}