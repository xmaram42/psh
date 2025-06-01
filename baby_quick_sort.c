/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   baby_quick_sort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 14:40:42 by maram             #+#    #+#             */
/*   Updated: 2025/05/27 07:26:29 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	split_stack(t_stack **a, t_stack **b, int size, int pivot)
{
	int	pushed;
	int	rotated;
	int	processed;

	pushed = 0;
	rotated = 0;
	processed = 0;
	while (processed < size)
	{
		if ((*a)->data < pivot)
		{
			pb(a, b);
			pushed++;
		}
		else
		{
			ra(a, 1);
			rotated++;
		}
		processed++;
	}
	while (rotated--)
		rra(a, 1);
	return (pushed);
}
void	restore_stack(t_stack **a, t_stack **b, int count)
{
	while (count-- > 0)
	{
		if (!b || !(*b))
		{
			//write(2, "restore_stack: empty B during restore!\n", 42);
			break;
		}
		pa(a, b);
	}
}

int	get_pivot_from_stack(t_stack *a, int size)
{
	int		*arr;
	int		pivot;
	int		i = 0;

	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (0);
	while (a)
	{
		arr[i++] = a->data;
		a = a->next;
	}
	sort_arr(arr, size);
	pivot = arr[size / 2];
	free(arr);
	return (pivot);
}


// QuickSort([10, 5, 3, 8, 2, 7])
// ↓
//  divide 
// [3, 2, 5]  |  pivot = 5  |  [8, 10, 7]

//  we will sort it separatly by use same function
// QuickSort([3, 2])
// QuickSort([8, 10, 7])