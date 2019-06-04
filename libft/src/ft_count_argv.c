/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_argv.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/01 16:46:16 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:28:12 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_count_argv(void **array)
{
	size_t	count;

	count = 0;
	if (!array)
		return (0);
	while (array[count])
		count++;
	return (count);
}
