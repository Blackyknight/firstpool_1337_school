/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 12:30:36 by aidouiss          #+#    #+#             */
/*   Updated: 2021/08/14 13:11:30 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char	*str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (str[a] != '\0')
	{
		if ((str[a] >= 'A' && str[a] <= 'Z') \
				|| (str[a] >= 'a' && str[a] <= 'z') \
				|| (str[a] >= '0' && str[a] <= '9'))
		{
			if (!b && str[a] >= 'A' && str[a] <= 'Z')
				str[a] = str[a] + 32;
			else if (b && str[a] >= 'a' && str[a] <= 'z')
				str[a] = str[a] - 32;
			b = 0;
		}
		else
			b = 1;
		a++;
	}
	return (str);
}
