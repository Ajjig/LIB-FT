#include "libft.h"

static  int	ft_check_is_here(char *str, char *to, size_t len)
{
    size_t i;

    i = 0;
	while (to[i])
	{
		if (str[i] != to[i] || !len--)
			return (0);
		i++;
	}
	return (1);
}

char    *ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t i;
    char    *str;
    char    *to_find;

	i = 0;
    str = (char *) big;
    to_find = (char *) little;
    if (!to_find[i] || big == little)
		return (str);
	while (str[i] && --len)
	{
		if (str[i] == *to_find)
			if (ft_check_is_here(&str[i], to_find, len))
				return (str + i);
		i++;
	}
	return (0);
}
