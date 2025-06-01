/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sm.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maram <maram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 13:35:24 by maabdulr          #+#    #+#             */
/*   Updated: 2025/06/01 12:39:52 by maram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_small_cases_a(t_stack **a, int size)
{
	if (size <= 3)
	{
		if (size == 2 && (*a)->data > (*a)->next->data)
		sa(a, 1);
		else if (size == 3)
		sort_three_a(a);
		return (1);
	}
	return (0);
}

int	check_small_cases_b(t_stack **b, int size)
{
	if (size == 2 && (*b)->data < (*b)->next->data)
		sb(b, 1);
	else if (size == 3)
		sort_three_b(b);
	else
		return (0);
	return (1);
}

