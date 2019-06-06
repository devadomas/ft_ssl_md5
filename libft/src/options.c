/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   options.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/13 15:31:05 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/06 10:10:30 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void			treat_options(char c, unsigned long *options)
{
	unsigned long	one;

	one = 1;
	if (c >= 'a' && c <= 'z')
		*options |= (one << (c - 97));
	else if (c >= 'A' && c <= 'Z')
		*options |= (one << (c - 39));
	else if (c >= '0' && c <= '9')
		*options |= (one << (c + 4));
	else
		*options |= (one << 63);
}

unsigned long		options(char **argv)
{
	unsigned long	options;
	char			*str;

	options = 0;
	argv++;
	while (*argv)
	{
		str = *argv;
		if (!ft_strcmp(*argv, "--"))
			break ;
		else if (*str == '-')
		{
			str++;
			while (*str)
			{
				treat_options(*str, &options);
				str++;
			}
		}
		argv++;
	}
	return (options);
}
