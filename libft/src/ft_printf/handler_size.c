/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 20:50:57 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:29:13 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_arg	*handle_size(t_arg *args, char **fmt)
{
	if (**fmt == 'h')
		args->size = S_H;
	if (**fmt == 'l')
		args->size = S_L;
	if (**fmt == 'z' || **fmt == 'I')
		args->size = S_Z;
	if (**fmt == 'j')
		args->size = S_J;
	if (args->size != 0)
		(*fmt)++;
	if (**fmt == 'h')
		args->size = S_HH;
	if (**fmt == 'l')
		args->size = S_LL;
	if (args->size == S_HH || args->size == S_LL)
		(*fmt)++;
	return (args);
}
