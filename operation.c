/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maram <maram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 18:17:54 by maabdulr          #+#    #+#             */
/*   Updated: 2025/05/25 16:30:43 by maram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
 
void	sa(t_stack **a, int print)
{
	t_stack *first;
	t_stack *second;

	if (!a || !*a || !(*a)->next)
	return;
	first = *a;
	second = (*a)->next;
	
	first->next = second->next;
	second->next = first;
	*a = second;
	if(print)
	{
		write(1, "sa\n", 3);
	}

}
void	sb(t_stack **b, int print)
{
	t_stack *first;
	t_stack *second;

	if (!b || !*b || !(*b)->next)
		return;

	first = *b;
	second = (*b)->next;

	first->next = second->next;
	second->next = first;
	*b = second;

	if (print)
		write(1, "sb\n", 3);
}
void	ss(t_stack **a, t_stack **b)
{
	sa(a, 0);
	sb(b, 0);
	write(1, "ss\n", 3);
}
 void	pa(t_stack **a, t_stack **b)
{
	t_stack	*top_b;

	if (!b || !(*b))
		return;
	top_b = *b;
	*b = (*b)->next;
	top_b->next = *a;
	*a = top_b;
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*top_a;

if (!a || !(*a))
		return;
	top_a = *a;
	*a = (*a)->next;
	top_a->next = *b;
	*b = top_a;
	write(1, "pb\n", 3);
}
