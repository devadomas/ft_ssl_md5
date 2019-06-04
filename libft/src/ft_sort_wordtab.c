/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:56:12 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:27:07 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	swap_index(char **argv, int arg_1, int arg_2)
{
	char	*tmp;

	tmp = argv[arg_1];
	argv[arg_1] = argv[arg_2];
	argv[arg_2] = tmp;
}

static void	sort_strings(char **argv, int arg_1, int arg_2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[arg_1][i] == argv[arg_2][j] && argv[arg_1][i] && argv[arg_2][j])
	{
		i++;
		j++;
	}
	if (argv[arg_1][i] == '\0' && argv[arg_2][j] != '\0')
		i = j;
	else if (argv[arg_1][i] != '\0' && argv[arg_2][j] == '\0')
		swap_index(argv, arg_1, arg_2);
	else
	{
		if (argv[arg_1][i] > argv[arg_2][j])
			swap_index(argv, arg_1, arg_2);
	}
}

void		ft_sort_wordtab(char **tab)
{
	int	i;
	int	j;

	i = -1;
	if (!tab)
		return ;
	while (tab[++i])
	{
		j = i;
		while (tab[++j])
			sort_strings(tab, i, j);
	}
}
