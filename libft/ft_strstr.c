/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliandie <aliandie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:25:33 by aliandie          #+#    #+#             */
/*   Updated: 2014/11/13 16:00:31 by aliandie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strstr(const char *s1, const char *s2)
{
	int		i;
	char	*str;
	char	*str2;

	i = 0;
	str = (char*)s1;
	str2 = (char*)s2;
	if (s2[0] == '\0')
		return (str);
	while (str[i])
	{
		if (ft_strncmp(&str[i], str2, ft_strlen(str2)) == 0)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
