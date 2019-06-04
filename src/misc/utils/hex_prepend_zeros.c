/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_prepend_zeros.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 14:11:32 by azaliaus          #+#    #+#             */
/*   Updated: 2019/05/18 19:34:44 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ssl.h"

char	*prepend_zeros_to_hex(char *str, size_t len)
{
	char	*zeros;
	size_t	length;

	zeros = NULL;
	length = ft_strlens(str);
	if (length == len)
		return (str);
	if (!(zeros = (char *)ft_strnew(sizeof(char) * (len - length + 1))))
		return (str);
	zeros = (char *)ft_memsets((void *)zeros, '0', len - length);
	return (ft_strjoinf(zeros, str, 3));
}
