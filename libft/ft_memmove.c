/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdulr <maabdulr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 14:42:31 by maabdulr          #+#    #+#             */
/*   Updated: 2025/01/08 19:01:52 by maabdulr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*ds;
	const unsigned char	*sr;
	size_t				i;

	ds = (unsigned char *)dst;
	sr = (const unsigned char *)src;
	if (ds == sr || len == 0)
		return (dst);
	if (ds < sr)
	{
		i = 0;
		while (i < len)
		{
			ds[i] = sr[i];
			i++;
		}
	}
	else
	{
		i = len;
		while (i-- > 0)
			ds[i] = sr[i];
	}
	return (dst);
}
