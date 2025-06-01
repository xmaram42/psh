/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdulr <maabdulr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:47:38 by maabdulr          #+#    #+#             */
/*   Updated: 2025/01/11 13:42:28 by maabdulr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(s1);
	dest = (char *)malloc(len * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	ft_memcpy(dest, s1, len);
	dest[len] = '\0';
	return (dest);
}
