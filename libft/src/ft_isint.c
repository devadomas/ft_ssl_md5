/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/01 21:13:49 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:27:57 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isint(char *s)
{
	int		i;
	int		len;

	i = 0;
	len = 0;
	if (!s)
		return (0);
	if (s[i] == '-' || s[i] == '+')
		i++;
	while (s[i] == '0')
		i++;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			return (0);
		i++;
		len++;
	}
	if (len > 10)
		return (0);
	if (len < 10)
		return (1);
	if ((s[i] <= '2') && (ft_atoi(s) >= INT_MIN && ft_atoi(s) <= INT_MAX))
		return (1);
	return (0);
}
