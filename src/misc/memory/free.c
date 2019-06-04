/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 16:30:12 by azaliaus          #+#    #+#             */
/*   Updated: 2019/05/18 19:34:51 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ssl.h"

void			free_ssl(t_ssl *ssl)
{
	if (!ssl)
		return ;
	if (ssl->input)
		ft_strdel(&ssl->input);
	if (ssl->output)
		ft_strdel(&ssl->output);
	free(ssl);
}
