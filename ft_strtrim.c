/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majjig <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:09:51 by majjig            #+#    #+#             */
/*   Updated: 2021/11/07 17:21:02 by majjig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_fill(char *dest, char *src, int size)
{
	char	*dest_bak;

	dest_bak = dest;
	while (size--)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (dest_bak);
}

static int	ft_is_here(char *s, char *set)
{
	while (*set)
	{
		if (*set++ == *s)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	char	*new_set;
	int		start;
	int		end;

	new_set = (char *) set;
	s = (char *) s1;
	start = 0;
	if (set == NULL || s == NULL)
		return (NULL);
	end = ft_strlen(s) - 1;
	while (ft_is_here(&s[start], new_set))
		start++;
	while (ft_is_here(&s[end], new_set) && end > start)
		end--;
	new_set = (char *) malloc(end - start + 2);
	if (new_set == NULL)
		return (NULL);
	ft_fill(new_set, &s[start], end - start + 1);
	return (new_set);
}
