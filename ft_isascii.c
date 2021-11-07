#include "libft.h"

int ft_isascii(int c)
{
    if (c > 127 || c < 0)
        return(0);
    return(1);
}