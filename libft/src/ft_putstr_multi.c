/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_multi.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/04 14:45:26 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:27:13 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_putstr_multi(char *old_str, int n_times)
{
	int				len;
	char			*ptr;
	char			*new_str;
	char			*return_string;

	if (!old_str || n_times < 1)
		return (NULL);
	len = ft_strlens(old_str);
	if (!(new_str = (char *)malloc(sizeof(char) * ((n_times * len) + 1))))
		return (NULL);
	return_string = new_str;
	while (n_times--)
	{
		ptr = old_str;
		while (*ptr)
			*(new_str++) = *(ptr++);
	}
	*new_str = '\0';
	ft_putstr(return_string);
	free(return_string);
	return (old_str);
	return (return_string);
}
