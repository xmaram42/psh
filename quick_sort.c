/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quick_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maram <maram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 07:26:48 by codespace         #+#    #+#             */
/*   Updated: 2025/06/01 12:40:09 by maram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	partition_stack(t_stack **a, t_stack **b, int pivot, int size, int *pushed, int *rotated)
{
	int processed = 0;

	while (processed < size)
	{
		if ((*a)->data < pivot)
		{
			pb(a, b);
			(*pushed)++;
		}
		else
		{
			ra(a, 1);
			(*rotated)++;
		}
		processed++;
	}
	while ((*rotated)-- > 0)
		rra(a, 1);
}
void	restore_b_to_a(t_stack **a, t_stack **b)
{
	while (*b)
	{
		int max = get_max_value(*b);
		bring_top(b, max, 1);
		pa(a, b);
	}
}
void	quick_sort_simulation(t_stack **a, t_stack **b, int size)
{
	int pivot;
	int pushed = 0;
	int rotated = 0;

    pushed = 0;
    rotated = 0;
	if (!a || size <= 1 || check_small_cases_a(a, size))
		return;
	pivot = get_pivot_from_stack(*a, size);
	partition_stack(a, b, pivot, size, &pushed, &rotated);
	if (size - pushed > 3)
		quick_sort_simulation(a, b, size - pushed);
	else
		check_small_cases_a(a, size - pushed);
	if (pushed <= 3)
	{
		check_small_cases_b(b, pushed);
		pa(a, b);
	}
	else if (pushed <= 5)
		sort_five_b(a, b);
	else
		quick_sort_simulation(b, a, pushed);
	restore_b_to_a(a, b);
}
