/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnjoinsf1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/22 17:43:26 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/04 10:30:11 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ssl.h"

char		*strnjoinsf1(char *s1, char *s2, size_t len1, size_t len2)
{
	size_t	i;
	char	*output;

	i = 0;
	if (!s1 && !s2)
		return (NULL);
	if (!s2)
		return (s1);
	if (!(output = (char *)ft_memalloc(sizeof(char) * (len1 + len2 + 1))))
	{
		ft_strdel(&s1);
		return (NULL);
	}
	while (i < len1 || i < len2)
	{
		if (i < len1)
			output[i] = s1[i];
		if (i < len2)
			output[i + len1] = s2[i];
		i++;
	}
	ft_strdel(&s1);
	return (output);
}
