/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fact.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:53:11 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:28:07 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_fact(int nb)
{
	int	result;

	result = 0;
	if (nb >= 0 && nb <= 12)
	{
		result = 1;
		if (nb > 1)
			result = nb * ft_fact(nb - 1);
	}
	else
		return (0);
	return (result);
}
