/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mannouao <mannouao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 09:30:14 by mannouao          #+#    #+#             */
/*   Updated: 2021/11/19 19:59:54 by mannouao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	if_is_ther(char *saver)
{
	if (!saver)
		return (0);
	while (*saver)
	{
		if (*saver == '\n')
			return (1);
		saver++;
	}
	return (0);
}

char	*ft_strjoin(char *saver, char *buff)
{
	char	*str;
	int		i;

	if (!saver)
	{
		saver = malloc(sizeof(char) * 1);
		saver[0] = '\0';
	}
	str = malloc(sizeof(char) * (ft_strlen(saver) + ft_strlen(buff) + 1));
	i = 0;
	while (saver[i])
	{
		str[i] = saver[i];
		i++;
	}
	while (*buff)
	{
		str[i] = *buff;
		buff++;
		i++;
	}
	str[i] = '\0';
	free(saver);
	return (str);
}
