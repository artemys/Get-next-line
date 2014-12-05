/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aliandie <aliandie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 15:42:02 by aliandie          #+#    #+#             */
/*   Updated: 2014/11/19 14:38:59 by aliandie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_cntword(char	const *str, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] == c)
		i++;
	if (str[i])
		j++;
	while (str[i])
	{
		while (str[i] == c)
		{
			i++;
			if (str[i] != c && str[i])
				j++;
		}
		i++;
	}
	return (j);
}

int		ft_cntl(char const *str, char c, int start)
{
	int		i;

	i = 0;
	if (str[start] == '\0')
	{
		return (i);
	}
	while (str[start] != c && str[start])
	{
		i++;
		start++;
	}
	return (i);
}

char	*ft_taballoc(char const *src, char c, int start)
{
	int		i;
	char	*str;

	i = 0;
	str = (char*)malloc(sizeof(char) * (ft_cntl(src, c, start) + 1));
	if (str == NULL)
		return (NULL);
	while (src[start] && src[start] != c)
	{
		str[i] = src[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}

char	**ft_tabfill(char const *s, char c, int j, char **tab)
{
	int	i;

	i = 0;
	while (s[i] == c)
		i++;
	tab[j] = ft_taballoc(s, c, i);
	j++;
	while (s[i])
	{
		while (s[i] == c)
		{
			i++;
			if (s[i] != c && s[i])
			{
				tab[j] = ft_taballoc(s, c, i);
				j++;
			}
		}
		i++;
	}
	return (tab);
}

char	**ft_strsplit(char const *s, char c)
{
	int		j;
	char	**tab;

	j = 0;
	if (s == NULL)
		return (NULL);
	if (c == '\0')
		return (NULL);
	tab = (char**)malloc(sizeof(char*) * (ft_cntword(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	tab[ft_cntword(s, c)] = '\0';
	ft_tabfill(s, c, j, tab);
	if (tab[0][0] == '\0')
		tab[0] = NULL;
	return (tab);
}
