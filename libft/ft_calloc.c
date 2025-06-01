/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdulr <maabdulr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:46:16 by maabdulr          #+#    #+#             */
/*   Updated: 2025/01/09 14:39:52 by maabdulr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	totsz;

	totsz = count * size;
	ptr = malloc(totsz);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, totsz);
	return (ptr);
}
