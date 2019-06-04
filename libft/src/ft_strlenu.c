/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenu.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 14:04:07 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:26:06 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlenu(const char *s)
{
	int		i;
	size_t	len;

	i = 0;
	len = 0;
	if (!s)
		return (len);
	while (s[i])
	{
		if ((unsigned char)s[i] < 0b10000000
		|| (unsigned char)s[i] >= 0b11000000)
			len++;
		i++;
	}
	return (len);
}
