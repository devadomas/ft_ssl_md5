/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:58:34 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:25:20 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int			i;
	int			j;
	const char	*occ;

	i = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	else
		while (haystack && haystack[i])
		{
			j = 0;
			occ = &haystack[i];
			while (haystack[i + j] == needle[j])
			{
				if (needle[j + 1] == '\0')
					return ((char *)occ);
				j++;
			}
			i++;
		}
	return (NULL);
}
