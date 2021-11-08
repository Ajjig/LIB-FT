/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majjig <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:05:13 by majjig            #+#    #+#             */
/*   Updated: 2021/11/08 15:44:47 by majjig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_alloc_fill(char *dest, char *src, char c)
{
	int	i;

	i = 0;
	while (src[i] && src[i] != c)
		i++;
	dest = (char *) malloc((i + 1) * sizeof(char));
	i = 0;
	while (src[i] && src[i] != c)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

static int	ft_count_words(char *str, char c)
{
	int	words;

	words = 0;
	while (*str)
	{
		if (*str != c)
		{
			words++;
			while (*str && *str != c)
				str++;
			continue ;
		}
		str++;
	}
	return (words + 1);
}

int	ft_check_is_alloc(char **str, int j)
{
	if (str[j] == NULL)
	{
		while (j >= 0)
			free(str[j--]);
		free(str);
		return (0);
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		words;
	char	**str;

	words = ft_count_words((char *) s, c);
	str = (char **) malloc(words * sizeof(char *));
	if (str == NULL || s == NULL)
		return (NULL);
	j = 0;
	while (*s)
	{
		if (*s != c)
		{
			str[j] = ft_alloc_fill(str[j], (char *) s, c);
			if (!(ft_check_is_alloc(str, j)))
				return (NULL);
			j++;
			while (*(s + 1) && *(s + 1) != c)
				s++;
		}
		s++;
	}
	str[j] = NULL;
	return (str);
}
