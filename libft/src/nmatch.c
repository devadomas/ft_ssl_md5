/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nmatch.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:59:11 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:25:01 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		check_combinaisons(int i, int j, char *s1, char *s2)
{
	if (s1[i] != '\0')
	{
		if (s2[j] == '\0')
			return (0);
		else if (s2[j] == '*')
			return (check_combinaisons(i, j + 1, s1, s2)
			+ check_combinaisons(i + 1, j, s1, s2));
		else if (s1[i] == s2[j])
			return (check_combinaisons(i + 1, j + 1, s1, s2));
		else
			return (0);
	}
	else if (s1[i] == '\0')
	{
		if (s2[j] == '\0')
			return (1);
		else if (s2[j] == '*')
			return (check_combinaisons(i, j + 1, s1, s2));
		else
			return (0);
	}
	return (0);
}

int				nmatch(char *s1, char *s2)
{
	if (!s1 || !s2)
		return (0);
	return (check_combinaisons(0, 0, s1, s2));
}
