/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter_percent.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 23:44:20 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:28:44 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_arg	*percent_to_a(t_arg *args)
{
	char	*tmp;

	args->type = T_PERCENT;
	tmp = NULL;
	args->content = ft_strdup("%");
	if (args->min_width != -1)
	{
		tmp = ft_strnew(sizeof(char) * (args->min_width - 2));
		tmp = (char *)ft_memsets((void *)tmp, ' ', args->min_width - 2);
		ft_strdel(&(args->content));
		args->content = ft_strdup("%");
		if (args->flag && args->flag[F_DASH])
			args->content = ft_strjoinf(args->content, tmp, 3);
		else
			args->content = ft_strjoinf(tmp, args->content, 3);
	}
	return (args);
}
