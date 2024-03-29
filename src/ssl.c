/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ssl.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 15:04:29 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/06 10:26:43 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ssl.h"

int		main(int ac, char **av)
{
	int		status;
	t_ssl	*ssl;

	(void)ac;
	ssl = declare_empty_ssl_structure();
	execute_hash(&ssl, av);
	status = (int)ssl->return_status;
	free_ssl(ssl);
	return (status);
}
