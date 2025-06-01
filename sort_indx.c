/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_indx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maram <maram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 22:36:26 by maram             #+#    #+#             */
/*   Updated: 2025/05/26 12:52:31 by maram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_stack_size(t_stack *stack)
{
	int	size = 0;
	while (stack)
	{
		size++;
		stack = stack->next;
	}
	return (size);
}
void	stack_to_array(t_stack *a, int *arr)
{
	int i;

	i = 0;
	while(a)
	{
		arr[i] = a->data;
		i++;
		a = a->next;
	}
}

void	replace_with_index(t_stack *a, int *arr, int size) //----
{
	int	i;

	while (a)
	{
		i = 0;
		while (i < size)
		{
			if (a->data == arr[i])
			{
				a->data = i;
				break ; //stop we fuond the same num
			}
			i++;
		}
		a = a->next;
	}
}
void	sort_arr(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}
void	index_stack(t_stack **a)
{
	int		size;
	int		*arr;
	t_stack	*tmp;
	int		i;

	size = get_stack_size(*a);
	arr = malloc(sizeof(int) * size);
	if (!arr)
		return;
	stack_to_array(*a, arr);
	sort_arr(arr, size);

	tmp = *a;
	while (tmp)
	{
		i = 0;
		while (i < size)
		{
			if (tmp->data == arr[i])
			{
				tmp->data = i;
				break;
			}
			i++;
		}
		tmp = tmp->next;
	}
	free(arr);
}
