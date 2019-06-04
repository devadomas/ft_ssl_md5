/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reset.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 12:02:31 by azaliaus          #+#    #+#             */
/*   Updated: 2019/05/18 19:35:00 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ssl.h"

void	reset_ssl_structure(t_ssl **ssl)
{
	(*ssl)->input_size = 0;
	if ((*ssl)->input)
		ft_strdel(&(*ssl)->input);
	if ((*ssl)->output)
		ft_strdel(&(*ssl)->output);
	(*ssl)->from_file = FALSE;
	(*ssl)->from_stdin = FALSE;
	(*ssl)->from_string = FALSE;
}
