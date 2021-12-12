/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 12:27:32 by aidouiss          #+#    #+#             */
/*   Updated: 2021/08/24 12:43:11 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	len(char	*str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

char	*ft_strdup(char	*src)
{
	int		a;
	int		b;
	char	*c;

	a = 0;
	b = len(src);
	c = (char *)malloc(sizeof(char) * b + 1);
	if (c == NULL)
		return (NULL);
	while (src[a] != '\0')
	{
		c[a] = src[a];
		a++;
	}
	c[a] = '\0';
	return (c);
}
