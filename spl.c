/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maram <maram@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 13:38:45 by maabdulr          #+#    #+#             */
/*   Updated: 2025/05/25 14:36:55 by maram            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"

static size_t	wcount(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

long	ft_atol(const char *str)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
		result = result * 10 + (*str++ - '0');
	return (result * sign);
}

// static void	split_all_helper(char **rs, char **av)
// {
// 	char	**tmp;
// 	int			p;
// 	int			i;
// 	int 		j;
	
// 	i = 1;
// 	j = 0;
// 	while (av[i])
// 	{
// 		tmp = ft_split(av[i], ' ');
// 		p = 0;
// 		while (tmp[p])
// 			rs[j++] = tmp[p++];
// 		free(tmp);
// 		i++;
// 	}
// 	rs[j] = NULL;
// }

char	**split_all(char **av)
{
	int		i = 1, j = 0, p = 0, num = 0;
	char	**rs;
	char	**tm;

	while (av[i])
		num += wcount(av[i++], ' ');
	rs = malloc(sizeof(char *) * (num + 1));
	if (!rs)
		return (NULL);

	i = 1;
	while (av[i])
	{
		tm = ft_split(av[i], ' ');
		if (!tm)
			return (NULL); // handle error

		p = 0;
		while (tm[p])
		{
			rs[j++] = ft_strdup(tm[p]); // نسخ آمن للمحتوى
			p++;
		}
		free_split(tm); // الآن نحرر بأمان
		i++;
	}
	rs[j] = NULL;
	return (rs);
}

int	*convert_to_int_array(char **str_array)
{
	int		*result;
	long	num;
	int		i;
	
	i = 0;
	while (str_array[i])
		i++;
	result = malloc(sizeof(int) * i);
	if (!result)
		return (NULL);
	i = 0;
	while (str_array[i])
	{
		num = ft_atol(str_array[i]);
		if (num > INT_MAX || num < INT_MIN)
		{
			free(result);
			return (NULL);
		}
		result[i] = (int)num;
		i++;
	}
	return (result);
}
