/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handler_flags.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 20:50:45 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:29:07 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_flag(char **fmt)
{
	if (**fmt == '-')
		return (1);
	if (**fmt == '+')
		return (1);
	if (**fmt == '0')
		return (1);
	if (**fmt == ' ')
		return (1);
	if (**fmt == '#')
		return (1);
	return (0);
}

t_arg	*handle_flags(t_arg *args, char **fmt)
{
	if (**fmt == '-' && args->flag)
		args->flag[F_DASH] = TRUE;
	if (**fmt == '+' && args->flag)
		args->flag[F_PLUS] = TRUE;
	if (**fmt == '0' && args->flag)
		args->flag[F_ZERO] = TRUE;
	if (**fmt == ' ' && args->flag)
		args->flag[F_SPACE] = TRUE;
	if (**fmt == '#' && args->flag)
		args->flag[F_HASHTAG] = TRUE;
	if (is_flag(fmt))
	{
		(*fmt)++;
		return (handle_flags(args, fmt));
	}
	else
		return (args);
}
