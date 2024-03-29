/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manipulate_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 20:51:10 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:29:20 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_arg	*p_width_flag(t_arg *args)
{
	int		size;
	char	*tmp;

	tmp = NULL;
	size = (int)ft_strlens(args->content);
	if (args->min_width != -1 && args->min_width > size)
	{
		tmp = ft_strnew(sizeof(char) * (args->min_width - size - 1));
		tmp = (char *)ft_memsets((void *)tmp, ' ', args->min_width - size - 1);
		if (args->flag && args->flag[F_DASH])
			args->content = ft_strjoinf(args->content, tmp, 1);
		else
			args->content = ft_strjoinf(tmp, args->content, 2);
		ft_strdel(&tmp);
	}
	return (args);
}
