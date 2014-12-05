/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliandie <aliandie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:52:17 by aliandie          #+#    #+#             */
/*   Updated: 2014/11/13 14:06:09 by aliandie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		nb;
	int		i;
	int		negative;

	i = 0;
	nb = 0;
	negative = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
			|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			negative = 1;
		i++;
	}
	while (ft_isdigit(str[i]) == 1)
	{
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	if (negative == 1)
		nb = -nb;
	return (nb);
}
