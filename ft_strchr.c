#include "libft.h"

char    *ft_strchr(char *s, int c)
{
    while(*s)
    {
        if (*s == c)
        {
            return(s);
        }
        s++;
    }
    if (!c)
        return(s);
    return(0);
}