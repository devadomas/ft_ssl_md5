/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char_to_uint64.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 22:37:12 by azaliaus          #+#    #+#             */
/*   Updated: 2019/05/18 19:33:15 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ssl.h"

void	sha384_char_to_uint64(t_sha384 **sha384, uint64_t i, int j)
{
	int				idx;
	unsigned char	s[8];
	uint64_t		u64_1;
	uint64_t		u64_2;

	idx = 0;
	while (idx < 8)
	{
		s[idx] = (unsigned char)((*sha384)->padded_str[i + idx]);
		idx++;
	}
	u64_1 = (uint64_t)s[0] << 24 | (uint64_t)s[1] << 16 | (uint64_t)s[2] << 8
		| (uint64_t)s[3];
	u64_2 = (uint64_t)s[4] << 24 | (uint64_t)s[5] << 16 | (uint64_t)s[6] << 8
		| (uint64_t)s[7];
	(*sha384)->w[j] = (u64_1 << 32UL) | u64_2;
}
