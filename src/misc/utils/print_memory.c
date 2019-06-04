/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_memory.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/20 13:35:45 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/04 10:28:10 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ssl.h"

static void		bit_write(const char *str, size_t i, int j, int bit)
{
	if ((unsigned char)(str[i + j]) & (1 << bit))
		write(1, "1", 1);
	else
		write(1, "0", 1);
}

static void		string_write(const char *str, size_t i, int j)
{
	if ((unsigned char)str[i + j] > 32 && (unsigned char)str[i + j] < 128)
		write(1, &str[i + j], 1);
	else
		write(1, ".", 1);
}

void			print_memory(const char *str, size_t size)
{
	int			bit;
	int			j;
	size_t		i;

	i = 0;
	while (i < size)
	{
		j = -1;
		while (++j < 8)
		{
			bit = 8;
			while (--bit >= 0)
				bit_write(str, i, j, bit);
			write(1, " ", 1);
		}
		j = -1;
		while (++j < 8)
			string_write(str, i, j);
		write(1, "\n", 1);
		i += 8;
	}
}
