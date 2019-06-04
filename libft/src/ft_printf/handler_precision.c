/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler_precision.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 20:50:52 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:29:11 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_arg	*handle_precision(va_list ap, t_arg *args, char **fmt)
{
	int		wildcard;
	size_t	i;

	i = 1;
	wildcard = 0;
	if (!(**fmt == '.'))
		return (args);
	if (*(++(*fmt)) == '*')
	{
		wildcard = va_arg(ap, int);
		if (wildcard >= 0)
			args->precision = wildcard;
		(*fmt)++;
		return (args);
	}
	else
		args->precision = 0;
	while (ft_isdigit(**fmt))
	{
		args->precision = args->precision * i + (*((*fmt)++) - 48);
		i *= 10;
	}
	return (args);
}
