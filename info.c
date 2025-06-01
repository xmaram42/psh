/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   info.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maram <maram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 13:35:10 by maabdulr          #+#    #+#             */
/*   Updated: 2025/05/22 19:57:29 by maram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_info info_fill(char **av)
{
    t_info i;
    int count = 0;

    i.array_num_str = split_all(av);
    if (!i.array_num_str)
        printf("split_all failed\n");
    while (i.array_num_str[count])
        count++;
    i.array_num = convert_to_int_array(i.array_num_str);
    if (!i.array_num)
    {
        printf("convert_to_int_array failed\n");
        int j = 0;
        while (i.array_num_str[j])
        {
            free(i.array_num_str[j]);
            j++;
        }
        free(i.array_num_str);
        i.array_num_str = NULL;
    }
    i.size = count;
    i.a = NULL;
    i.b = NULL;
    return (i);
}
