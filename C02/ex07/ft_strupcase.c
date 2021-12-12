/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 12:19:55 by aidouiss          #+#    #+#             */
/*   Updated: 2021/08/14 15:11:32 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char	*str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] <= 'z' && str[a] >= 'a')
			str[a] = str[a] - 32;
		a++;
	}
	return (str);
}
