char    *ft_strrchr(char *s, int c)
{
    int i;

    i = 0;
    if (!*s)
        return(0);
    while (s[i])
        i++;
    while(i >= 0)
    {
        if (s[i] == c)
            return((char *)&s[i]);
        i--;
    }
    return(0);
}