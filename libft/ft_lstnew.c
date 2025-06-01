/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdulr <maabdulr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 19:49:39 by maabdulr          #+#    #+#             */
/*   Updated: 2025/01/09 16:39:14 by maabdulr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nnwd;

	nnwd = malloc(sizeof(t_list));
	if (!nnwd)
		return (NULL);
	nnwd ->content = content;
	nnwd ->next = NULL;
	return (nnwd);
}
