/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:56:16 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:27:05 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 1;
	if (nb <= 0)
		sqrt = 0;
	else
		while ((sqrt * sqrt) < nb)
			sqrt++;
	if ((sqrt * sqrt) != nb)
		sqrt = 0;
	return (sqrt);
}
