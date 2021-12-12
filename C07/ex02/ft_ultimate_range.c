/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 13:25:24 by aidouiss          #+#    #+#             */
/*   Updated: 2021/08/25 16:18:36 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int	min, int	max)
{
	int	*b;
	int	a;

	if (min >= max)
		return (0);
	b = (int *)malloc(sizeof(int) * max - min);
	if (b == NULL)
		return (0);
	a = 0;
	while (min < max)
	{
		b[a] = min;
		a++;
		min++;
	}
	return (b);
}

int	ft_ultimate_range(int	**range, int	min, int	max)
{
	*range = ft_range(min, max);
	if (*range == NULL)
		return (0);
	return (max - min);
}
