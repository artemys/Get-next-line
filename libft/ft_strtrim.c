/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliandie <aliandie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/09 16:28:45 by aliandie          #+#    #+#             */
/*   Updated: 2014/11/13 15:58:21 by aliandie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char *ft_strtrim(char const *s)
{
	int		start;
	int		end;
	char	*str;
	int		i;

	i = 0;
	start = 0;
	if (s == NULL)
		return (NULL);
	end = ft_strlen(s) - 1;
	while (s[start] == ' ' || s[start] == '\t' || s[start] == '\n')
		start++;
	while ((s[end] == ' ' || s[end] == '\t' || s[end] == '\n') && start <= end)
		end--;
	str = ft_memalloc(end - start + 1);
	if (str == NULL)
		return (NULL);
	while (start <= end)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
