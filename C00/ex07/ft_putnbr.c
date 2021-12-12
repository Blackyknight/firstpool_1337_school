/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 14:12:34 by aidouiss          #+#    #+#             */
/*   Updated: 2021/08/16 12:50:27 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char	c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_write('-');
		ft_write('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_write('-');
		ft_putnbr(nb * -1);
	}
	else if (nb < 10)
	{
		ft_write(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_write(nb % 10 + '0');
	}
}
