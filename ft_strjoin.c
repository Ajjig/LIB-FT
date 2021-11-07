#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *str;
    char    *cat;
    int i;
    int total;

    i = 0;
    str = (char *) s1;
    cat = (char *) s2;
    if (s1 == NULL || s2 == NULL)
        return(NULL);
    total = ft_strlen(str) + ft_strlen(cat) + 1;
    if(!(str = (char*) malloc(total * sizeof(char))))
        return (NULL);
    ft_strlcpy(str, s1, total);
    ft_strlcat(str, s2, total);
    return(str);
}