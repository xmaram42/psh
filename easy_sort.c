/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easy_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/23 13:31:33 by maabdulr          #+#    #+#             */
/*   Updated: 2025/05/27 06:28:40 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_two(t_stack **a)
{
	if(!a || !(*a) || !(*a)->next)
	return;
	if((*a)->data > (*a)->next->data)
	sa(a, 1);
}



void	rrr(t_stack **a, t_stack **b)
{
	rra(a, 0);
	rrb(b, 0);
	write(1, "rrr\n", 4);
}
int	get_min_value(t_stack *a)
{
	int	min;

	if (!a)
		return (0);
	min = a->data;
	while (a)
	{
		if (a->data < min)
			min = a->data;
		a = a->next;
	}
	return (min);
}

int	get_max_value(t_stack *b)
{
	int	max;

	if (!b)
		return (0);
	max = b->data;
	while (b)
	{
		if (b->data > max)
			max = b->data;
		b = b->next;
	}
	return (max);
}

int get_index(t_stack *stack, int value)
{
	int i = 0;
	while (stack)
	{
		if (stack->data == value)
			return (i);
		stack = stack->next;
		i++;
	}
	return (-1); // not found
}

void bring_top(t_stack **stack, int value, int is_stack_b)
{
	int size = get_stack_size(*stack);

	while ((*stack)->data != value)
	{
		int index = get_index(*stack, value); 

		if (index <= size / 2)
		{
			if (is_stack_b)
				rb(stack, 1);
			else
				ra(stack, 1);
		}
		else
		{
			if (is_stack_b)
				rrb(stack, 1);
			else
				rra(stack, 1);
		}
	}
}
