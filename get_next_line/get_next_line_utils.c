/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperello <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:44:30 by rperello          #+#    #+#             */
/*   Updated: 2025/03/11 05:17:10 by rperello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *all_readed, char *buff)
{
	int		i;
	int		len_readed;
	char	*result;

	if (!all_readed)
	{
		all_readed = malloc(sizeof(char) * 1);
		all_readed[0] = '\0';
	}
	if (!all_readed || !buff)
		return (NULL);
	len_readed = ft_strlen(all_readed);
	result = malloc(sizeof(char) * (len_readed + ft_strlen(buff) + 1));
	if (!result)
		return (NULL);
	i = -1;
	while (all_readed[++i])
		result[i] = all_readed[i];
	i = -1;
	while (buff[++i])
		result[len_readed + i] = buff[i];
	result[len_readed + i] = '\0';
	free(all_readed);
	return (result);
}

char	*ft_strchr(const char *s, int c)
{
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)s);
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	return (0);
}
