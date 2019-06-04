/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaliaus <azaliaus@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/03 14:56:02 by azaliaus          #+#    #+#             */
/*   Updated: 2019/06/02 15:27:20 by azaliaus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int unsigned_n;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		unsigned_n = n * (-1);
	}
	else
		unsigned_n = n;
	if (unsigned_n > 9)
		ft_putnbr_fd(unsigned_n / 10, fd);
	ft_putchar_fd(unsigned_n % 10 + 48, fd);
}
