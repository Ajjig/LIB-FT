/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majjig <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:09:40 by majjig            #+#    #+#             */
/*   Updated: 2021/11/08 15:47:04 by majjig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	ch;

	ch = (unsigned char) c;
	i = 0;
	if (!*s)
		return (0);
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == ch)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
