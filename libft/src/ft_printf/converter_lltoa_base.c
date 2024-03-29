/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter_lltoa_base.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/08 20:49:53 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:28:38 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*lltoa_base(char *base, long long nbr)
{
	char				*str;
	size_t				base_size;
	size_t				size;
	unsigned long long	unbr;

	base_size = ft_strlen(base);
	if (nbr < 0)
		unbr = nbr * -1;
	else
		unbr = nbr;
	size = str_size_base(base_size, unbr);
	if (nbr < 0)
		size++;
	if (!(str = ft_strnew(sizeof(char) * size)))
		return (NULL);
	if (nbr < 0)
		str[0] = '-';
	while (unbr > base_size - 1)
	{
		str[--size] = base[unbr % base_size];
		unbr /= base_size;
	}
	str[--size] = base[unbr];
	return (str);
}
