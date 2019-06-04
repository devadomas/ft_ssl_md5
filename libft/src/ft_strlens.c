/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlens.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 19:01:58 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:26:08 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlens(const char *s)
{
	size_t len;

	len = 0;
	if (!s)
		return (len);
	while (s[len])
		len++;
	return (len);
}
