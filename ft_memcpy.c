/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majjig <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 16:01:32 by majjig            #+#    #+#             */
/*   Updated: 2021/11/07 16:42:22 by majjig           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dst;

	if (dest == NULL && src == NULL)
		return (NULL);
	dst = (unsigned char *) dest;
	while (n--)
		*dst++ = *(unsigned char *)src++;
	return (dest);
}
