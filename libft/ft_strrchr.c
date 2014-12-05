/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliandie <aliandie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 20:43:02 by aliandie          #+#    #+#             */
/*   Updated: 2014/11/13 15:20:23 by aliandie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		j;
	char	*str;

	str = (char*)s;
	j = ft_strlen(str);
	if ((char)c == '\0')
		return (&str[j]);
	while (j > 0)
	{
		j--;
		if (str[j] == (char)c)
			return (&str[j]);
	}
	return (NULL);
}
