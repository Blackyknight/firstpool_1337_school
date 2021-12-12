/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:20:53 by aidouiss          #+#    #+#             */
/*   Updated: 2021/08/07 15:50:49 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_write(char	c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_write(a / 10 + '0');
			ft_write(a % 10 + '0');
			write(1, " ", 1);
			ft_write(b / 10 + '0');
			ft_write(b % 10 + '0');
			if (a != 98)
				write(1, ", ", 2 );
			b++;
		}
		a++;
	}
}
