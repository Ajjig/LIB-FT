#include "libft.h"

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *str;
    int i;
    int len;

    i = 0;
    if(s == NULL)
        return(NULL);
    len = ft_strlen((char *) s);
    if(!(str = (char *) malloc(len + 1 * sizeof(char))))
        return(NULL);
    while(s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = 0;
    return(str);
}