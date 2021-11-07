#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	re;

	if (n == 0)
	{
		return (0);
	}
	while ((*s1 != '\0' && *s2 != '\0') && n > 0)
	{
		if (*s1 != *s2)
			break ;
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
	{
		s1--;
		s2--;
	}
	re = (unsigned char) *s1 - (unsigned char) *s2;
	return (re);
}
