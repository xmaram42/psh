/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maram <maram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 13:34:50 by maabdulr          #+#    #+#             */
/*   Updated: 2025/05/25 14:39:42 by maram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

t_stack	*new_node(int data)   // new node
{
	t_stack *node;

	node = malloc(sizeof(t_stack));
	if (!node)
		return (NULL);
	node->data = data;
	node->next = NULL;
	return(node);
}

void append_stack(t_stack **stack, int data)
{
	t_stack *new = new_node(data);
	t_stack *tmp;

	if(*stack == NULL)
	{
		*stack = new;
		return;
	}
	tmp = *stack;
	while(tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	// printf("%d\n", tmp->data);
}
void fill_stack(t_stack **a, int *array, int size)
{
	int i = 0;
	while (i < size)
	{
		append_stack(a, array[i]);
		i++;
	}
}
void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	if (!stack || !*stack)
		return;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
	*stack = NULL;
}
void print_stack(t_stack *stack) 
{
    while (stack) 
    {
       // printf("%d\n", stack->data);
        stack = stack->next;
    }
}
