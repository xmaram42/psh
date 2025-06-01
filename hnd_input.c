/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hnd_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdulr <maabdulr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 13:35:19 by maabdulr          #+#    #+#             */
/*   Updated: 2025/05/23 13:22:36 by maabdulr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"
#include "libft/libft.h" 

int vld_number(char *s)
{
    int i;
    
    i = 0;
    while(s[i])
    {
        while(s[i] && (s[i] == ' ' || s[i] == '\t'))
        i++;
        if(s[i] && (ft_isdigit(s[i])
        || ((s[i] == '-' || s[i] == '+' ) && (i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t')
        && (s[i + 1] &&  ft_isdigit(s[i + 1])))))
        i++;
        else if (s[i] && (s[i] != ' ' && s[i] != '\t'))
        {
            // printf("%c\n", s[i]);
            // printf("lol\n");   
            return(1);
        }
    }
    return(0);
}

int parc(int ac, char **av)
{
    (void)ac;
    int i = 1;

    while(av[i])
    {
        if (vld_number(av[i]) == 1)
            return (1);
        i++;
    }
    return (0);
}

int check_dup(int *array, int size)
{
    int i;
    int j;

	i = 0;
	while(i < size)
	{
		j = i + 1;
		while(j < size)
		{
			if(array[i] == array[j])
			{
                return (1);
			}
			j++;
		}
		i++;
	}
	return(0);
}