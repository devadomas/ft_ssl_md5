/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdups.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/09 04:06:04 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:26:28 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdups(const char *s1)
{
	char	*dst;

	if (!s1)
		return (NULL);
	if (!(dst = ft_strnew(sizeof(char) * ft_strlens(s1))))
		return (NULL);
	return (ft_strcpy(dst, s1));
}
