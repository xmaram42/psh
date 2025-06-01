/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdulr <maabdulr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/06 18:04:13 by maabdulr          #+#    #+#             */
/*   Updated: 2025/01/08 18:35:03 by maabdulr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					i;
	int					sg;
	unsigned long int	rus;

	i = 0;
	sg = 1;
	rus = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+' )
	{
		if (str[i] == '-')
			sg *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		rus = rus * 10 + (str[i] - '0');
		i++;
	}
	if (sg == -1 && rus >= 9223372036854775808LLU)
		return (0);
	if (rus >= __LONG_LONG_MAX__ && sg != -1)
		return (-1);
	return (sg * (int)rus);
}
