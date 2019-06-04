/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:58:49 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:25:15 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	start;
	size_t	stop;

	if (!s)
		return (NULL);
	start = 0;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	stop = ft_strlen(s);
	while ((s[stop - 1] == ' ' || s[stop - 1] == '\n' || s[stop - 1] == '\t')
	&& stop > start)
		stop--;
	if (start == 0 && stop == ft_strlen(s))
		return (ft_strdup(s));
	else if (start == stop)
		return (ft_strdup(""));
	else
		return (ft_strsub(s, start, stop - start));
}
