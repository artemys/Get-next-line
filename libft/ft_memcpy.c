/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliandie <aliandie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/03 15:17:28 by aliandie          #+#    #+#             */
/*   Updated: 2014/11/13 14:35:08 by aliandie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*strd;
	char	*strs;

	i = 0;
	strd = (char*)dst;
	strs = (char*)src;
	while (i < n)
	{
		strd[i] = strs[i];
		i++;
	}
	return (strd);
}
