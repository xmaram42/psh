/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maabdulr <maabdulr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:32:17 by maabdulr          #+#    #+#             */
/*   Updated: 2025/01/11 13:13:18 by maabdulr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*nstr;
	size_t	len1;
	size_t	len2;
	size_t	totln;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	totln = len1 + len2 + 1;
	nstr = (char *)malloc(totln);
	if (!nstr)
		return (NULL);
	nstr[0] = '\0';
	ft_strlcat(nstr, s1, totln);
	ft_strlcat(nstr, s2, totln);
	return (nstr);
}
