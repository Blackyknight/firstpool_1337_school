/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aidouiss <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/14 11:19:13 by aidouiss          #+#    #+#             */
/*   Updated: 2021/08/14 12:09:32 by aidouiss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char	*str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		if (str[a] < 'a' || str[a] > 'z')
			return (0);
		a++;
	}
	return (1);
}
