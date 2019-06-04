/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcountif.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 17:44:34 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:26:38 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcountif(char *s, char c)
{
	int	i;
	int	occ;

	i = 0;
	occ = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		if (s[i] == c)
			occ++;
		i++;
	}
	return (occ);
}
