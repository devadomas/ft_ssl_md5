/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manipulate_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 20:51:14 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:29:22 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_arg	*s_width_flag_precision(t_arg *args)
{
	int		size;
	char	*tmp;

	tmp = NULL;
	if (args->precision != -1 && args->type != T_WSTRING)
	{
		tmp = ft_strnew(sizeof(char) * args->precision);
		tmp = ft_strncpys(tmp, args->content, args->precision);
		ft_strdel(&(args->content));
		args->content = ft_strdupf(tmp);
	}
	size = (args->len == 0) ? (int)ft_strlens(args->content) : args->len;
	if (args->min_width != -1 && args->min_width > size)
	{
		tmp = ft_strnew(sizeof(char) * (args->min_width - size - 1));
		tmp = (char *)ft_memsets((void *)tmp, ' ', args->min_width - size - 1);
		if (args->flag && args->flag[F_DASH])
			args->content = ft_strjoinf(args->content, tmp, 3);
		else
			args->content = ft_strjoinf(tmp, args->content, 3);
		args->len = 0;
	}
	return (args);
}
