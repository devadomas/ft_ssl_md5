/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 20:50:02 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:28:42 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_arg	*lower_p_to_a(va_list ap, t_arg *args)
{
	size_t	nbr;

	args->type = T_POINTER;
	nbr = (size_t)va_arg(ap, void *);
	if (nbr == 0)
	{
		args->content = ft_strdup("0x0");
	}
	else
	{
		args->content = ulltoa_base("0123456789abcdef", nbr);
		args->content = ft_strjoinf("0x", args->content, 2);
	}
	return (p_width_flag(args));
}
