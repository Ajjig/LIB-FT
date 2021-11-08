/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majjig <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:05:13 by majjig            #+#    #+#             */
/*   Updated: 2021/11/08 11:20:15 by majjig           ###   ########.fr       */
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
	if (dest == NULL)
	{
		free(dest);
		return(NULL);
	}
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

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		words;
	char	**str;

	words = ft_count_words((char *) s, c);
	str = (char **) malloc(words * sizeof(char *));
	if (str == NULL || s == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			str[j] = ft_alloc_fill(str[j], (char *) &s[i], c);
			j++;
			while (s[i + 1] && s[i + 1] != c)
				i++;
		}
		i++;
	}
	str[j] = NULL;
	return (str);
}
