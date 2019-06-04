/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strright.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 12:09:52 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:25:27 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strright(const char *src, size_t len)
{
	size_t	i;

	i = ft_strlens(src);
	if (!src)
		return (NULL);
	if (len > i)
		return ((char *)src);
	while (*src && (i - len))
	{
		src++;
		i--;
	}
	return ((char *)src);
}
