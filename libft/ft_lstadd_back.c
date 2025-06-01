/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdulr <maabdulr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 11:33:58 by maabdulr          #+#    #+#             */
/*   Updated: 2025/01/09 17:09:01 by maabdulr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*start;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	start = *lst;
	while (start -> next)
	{
		start = start -> next ;
	}
	start -> next = new;
}
