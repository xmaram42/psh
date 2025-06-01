/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdulr <maabdulr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 16:00:14 by maabdulr          #+#    #+#             */
/*   Updated: 2025/01/08 19:04:06 by maabdulr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dslen;
	size_t	srlen;
	size_t	i;

	dslen = ft_strlen(dst);
	srlen = ft_strlen(src);
	i = 0;
	if (dstsize <= dslen)
		return (dstsize + srlen);
	while (src[i] && (dslen + i) < (dstsize - 1))
	{
		dst[dslen + i] = src[i];
		i++;
	}
	dst[dslen + i] = '\0';
	return (dslen + srlen);
}
