/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstartsby.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/16 19:57:05 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:25:22 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_strstartsby(char *origin, char *seek)
{
	int	i;

	i = 0;
	if (!origin || !seek)
		return (FALSE);
	while (origin[i] && seek[i] && origin[i] == seek[i])
		i++;
	if (seek[i])
		return (FALSE);
	return (TRUE);
}
