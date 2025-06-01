/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ooperation.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdulr <maabdulr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 18:17:54 by maabdulr          #+#    #+#             */
/*   Updated: 2025/05/23 15:26:02 by maabdulr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **a, int print)
{
	t_stack	*first;
	t_stack	*tmp;

	if (!a || !(*a) || !(*a)->next)
		return;
	first = *a;
	*a = (*a)->next;
	first->next = NULL;
	tmp = *a;
	while (tmp->next)
		tmp = tmp->next; 
	tmp->next = first;
	if (print)
		write(1, "ra\n", 3);
}

void	rb(t_stack **b, int print)
{
	t_stack	*first;
	t_stack	*tmp;

	if (!b || !(*b) || !(*b)->next)
		return;
	first = *b;
	*b = (*b)->next;
	first->next = NULL;
	tmp = *b;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = first;
	if (print)
		write(1, "rb\n", 3);
}

void	rr(t_stack **a, t_stack **b)
{
	ra(a, 0);
	rb(b, 0);
	write(1, "rr\n", 3);
}

void	rra(t_stack **a, int print)

{
	t_stack	*last;
	t_stack	*tmp;

	if (!a || !(*a) || !(*a)->next)
		return;
	tmp = *a;
	while (tmp->next && tmp->next->next)
		tmp = tmp->next;
	last = tmp->next;
	tmp->next = NULL;
	last->next = *a;
	*a = last;
	if (print)
		write(1, "rra\n", 4);
}


void	rrb(t_stack **b, int print)
{
	t_stack	*last;
	t_stack	*tmp;

	if (!b || !(*b) || !(*b)->next)
		return;
	tmp = *b;
	while (tmp->next && tmp->next->next)
		tmp = tmp->next;
	last = tmp->next;
	tmp->next = NULL;
	last->next = *b;
	*b = last;
	if (print)
		write(1, "rrb\n", 4);
}
