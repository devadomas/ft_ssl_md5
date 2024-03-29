/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deltab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/28 21:33:46 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:28:10 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_deltab(void *content)
{
	int		i;
	char	**tmp;

	i = 0;
	tmp = (char **)content;
	while (tmp[i])
		free(tmp[i++]);
	free(tmp);
}
