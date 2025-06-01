/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 13:35:02 by maabdulr          #+#    #+#             */
/*   Updated: 2025/05/27 09:27:28 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "push_swap.h"

int	main(int ac, char **av)
{
	t_info	i;

	if (ac == 1)
		return (0);
	if (parc(ac, av) == 1)
		return (write(2, "Error\n", 6), 1);
	i = info_fill(av);
	if (check_dup(i.array_num, i.size))
	{
		free_info(&i);
		return (write(2, "Error\n", 6), 1);
	}
	fill_stack(&i.a, i.array_num, i.size);
	index_stack(&i.a);
	if (i.size == 2 && i.a->data > i.a->next->data)
		sa(&i.a, 1);
	else if (i.size <= 5)
		sort_five_a(&i.a, &i.b);
	else
		quick_sort_simulation(&i.a, &i.b, i.size);
	free_info(&i);
	return (0);
}