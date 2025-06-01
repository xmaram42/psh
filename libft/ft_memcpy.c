/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdulr <maabdulr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 12:32:41 by maabdulr          #+#    #+#             */
/*   Updated: 2025/01/11 13:11:29 by maabdulr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*dst;
	const unsigned char	*sr;
	size_t				i;

	if (!dest && !src)
	{
		return (NULL);
	}
	dst = (unsigned char *)dest;
	sr = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst[i] = sr[i];
		i++;
	}
	return (dest);
}
