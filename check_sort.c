/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maram <maram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 06:09:46 by codespace         #+#    #+#             */
/*   Updated: 2025/06/01 12:39:45 by maram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// sort  stack a
void	sort_three_a(t_stack **a)  
{
	int	first;
	int	sec;
	int	thr;
	
	if (!a || !(*a) || !(*a)->next || !(*a)->next->next)
	return;
	
	first = (*a)->data;
	sec = (*a)->next->data;
	thr = (*a)->next->next->data;
	if (first < sec && sec < thr) // 1 2 3 
	return;
	else if (first > sec && sec < thr && thr > first) // 2 1 3
	sa(a, 1);
	else if (first > sec && sec > thr) // 3 2 1
	{
		sa(a, 1);
		rra(a, 1);
	}
	else if (first > sec && sec < thr && first > thr) // 3 1 2
	ra(a, 1); 
	else if (first < sec && sec > thr && first < thr) // 1 3 2
	{
		sa(a, 1);
		rra(a, 1);
	}
	else if (first < sec && sec > thr && first > thr) // 2 3 1
	rra(a, 1);
}

void	sort_five_a(t_stack **a, t_stack **b)
{
	int	min;
	int	sec_min;

	min = get_min_value(*a);
	while ((*a)->data != min)
		ra(a, 1);
	if (*a && (*a)->next)
	pb(a, b);
	sec_min = get_min_value(*a);
	while ((*a)->data != sec_min)
		ra(a, 1);
	pb(a, b);

	sort_three_a(a);

	if (*b)
	pa(a, b);
if (*b)
	pa(a, b);
}

// sort  stack b

void	sort_three_b(t_stack **b)
{
	int	first;
	int	second;
	int	third;

	if (!b || !(*b) || !(*b)->next || !(*b)->next->next)
		return;

	first = (*b)->data;
	second = (*b)->next->data;
	third = (*b)->next->next->data;

	if (first < second && second < third)
	{
		sb(b, 1);
		rrb(b, 1);
	}
	else if (first < second && second > third && first < third)
		rb(b, 1);
	else if (first > second && second < third && first < third)
	{
		sb(b, 1);
		rb(b, 1);
	}
	else if (first < second && second > third && first > third)
		sb(b, 1);
	else if (first > second && second > third)
		return;
	else if (first > second && second < third && first > third)
		rrb(b, 1);
}

void	sort_five_b(t_stack **a, t_stack **b)
{
	int	max;
	int	sec_max;
	int	b_size;

	if (!b || !(*b))
		return;

	max = get_max_value(*b);
	bring_top(b, max, 1);
	pa(a, b);

	sec_max = get_max_value(*b);
	bring_top(b, sec_max, 1);
	pa(a, b);

	b_size = get_stack_size(*b);
	if (b_size == 3)
		sort_three_b(b);
	else if (b_size == 2 && (*b)->data < (*b)->next->data)
		sb(b, 1);

	while (*b)
		pa(a, b);
}