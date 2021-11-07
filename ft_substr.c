#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *new_s;
    char    *str;
    
    
    new_s = (char *) s;
    if (new_s == NULL)
        return(NULL);
    if (start > (size_t) ft_strlen(new_s) + 1)
        return(ft_strdup(""));
    if(!(str = (char *) malloc(len + 1)))
        return(NULL);
    ft_strlcpy(str, new_s + start, len + 1);
    return(str);
}