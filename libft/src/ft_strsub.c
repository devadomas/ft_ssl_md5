/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:58:40 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:25:17 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*d;
	size_t	i;
	size_t	j;

	j = 0;
	if (!s)
		return (NULL);
	if (!(d = ft_strnew(sizeof(char) * len)))
		return (NULL);
	while (start-- && s[j])
		j++;
	i = 0;
	while (len-- && s[j])
		d[i++] = s[j++];
	return (d);
}
