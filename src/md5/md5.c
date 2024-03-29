/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   md5.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 15:04:37 by azaliaus          #+#    #+#             */
/*   Updated: 2019/05/18 19:35:30 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ssl.h"

static char	*convert_output(t_md5 *md5)
{
	char	*output;

	output = ft_strdupf(prepend_zeros_to_hex(
		ulltoa_base("0123456789abcdef", reverse_bits(md5->h0)), 8));
	output = ft_strjoinf(output, prepend_zeros_to_hex(
		ulltoa_base("0123456789abcdef", reverse_bits(md5->h1)), 8), 3);
	output = ft_strjoinf(output, prepend_zeros_to_hex(
		ulltoa_base("0123456789abcdef", reverse_bits(md5->h2)), 8), 3);
	output = ft_strjoinf(output, prepend_zeros_to_hex(
		ulltoa_base("0123456789abcdef", reverse_bits(md5->h3)), 8), 3);
	return (output);
}

char		*convert_md5(char *input, size_t size)
{
	t_md5	*md5;
	char	*output;

	if (!(md5 = initialize_md5_structure(input, size)))
		return (NULL);
	process_md5(&md5);
	output = convert_output(md5);
	destroy_md5_structure(md5);
	return (output);
}
