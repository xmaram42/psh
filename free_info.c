/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_info.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdulr <maabdulr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 20:04:12 by maabdulr          #+#    #+#             */
/*   Updated: 2025/05/04 20:14:48 by maabdulr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_split(char **arr)
{
	int	i;

	if (!arr)
		return;
	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		arr[i] = NULL; // حماية إضافية
		i++;
	}
	free(arr);
}
void	free_info(t_info *i)
{
	if (i->array_num_str)
	{
		int j = 0;
		while (i->array_num_str[j])
			free(i->array_num_str[j++]);
		free(i->array_num_str);
		i->array_num_str = NULL;
	}

	if (i->array_num)
	{
		free(i->array_num);
		i->array_num = NULL;
	}

	if (i->a)
	{
		free_stack(&i->a);
		i->a = NULL;
	}
	if (i->b)
	{
		free_stack(&i->b);
		i->b = NULL;
	}
}