/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter_str_size_base.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 20:50:09 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:28:48 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	str_size_base(size_t base_size, unsigned long long nbr)
{
	size_t	size;

	size = 0;
	while (nbr > base_size - 1)
	{
		size++;
		nbr /= base_size;
	}
	return (++size);
}
