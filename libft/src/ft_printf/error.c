/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 20:50:33 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:28:58 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_args(t_arg *args)
{
	t_arg	*tmp;

	tmp = NULL;
	if (!(args = args->first))
		return ;
	while (args)
	{
		tmp = args->next;
		ft_strdel(&(args->content));
		if (args->flag)
			free(args->flag);
		if (args)
			free(args);
		args = tmp;
	}
	tmp = NULL;
	args = NULL;
}

t_arg		*error_handler_with_ap(va_list ap, t_arg *args)
{
	va_end(ap);
	if (args)
		free_args(args);
	return (NULL);
}

int			error_handler_without_ap(t_arg *args)
{
	if (args)
		free_args(args);
	return (-1);
}
