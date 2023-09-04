/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 12:10:56 by egrevess          #+#    #+#             */
/*   Updated: 2022/11/07 16:36:16 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char	*str)
{
	int	count;

	if (!str)
		return (0);
	count = 0;
	while (str[count])
		++count;
	return (count);
}

char	*ft_strcat(char *temp, char **buff)
{
	char	*res;
	int		buff_len;
	int		temp_len;
	int		i;
	int		j;

	i = -1;
	j = 0;
	buff_len = ft_strlen(*buff);
	temp_len = ft_strlen(temp);
	res = malloc(sizeof(*res) * (buff_len + temp_len + 1));
	if (!res)
		return (ft_free(&temp, buff));
	while (++i < temp_len)
		res[i] = temp[i];
	ft_free(&temp, 0);
	while (j < buff_len)
	{
		res[i + j] = (*buff)[j];
		++j;
	}	
	res[i + j] = '\0';
	return (res);
}

char	*strcpy_untill_nl(char **temp)
{
	char	*line;
	int		i;
	int		nb_nl;

	i = 0;
	nb_nl = ft_find_ln(*temp);
	line = malloc(sizeof(*line) * (ft_find_ln(*temp) + 2));
	if (!line)
		return (ft_free(temp, 0));
	while (i <= nb_nl)
	{
		line[i] = (*temp)[i];
		++i;
	}
	line[i] = '\0';
	return (line);
}

char	*strcpy_from_nl(char *temp, int len)
{
	char	*res;
	int		size;
	int		i;
	int		j;

	size = ft_strlen(temp) - ft_find_ln(temp);
	res = malloc(sizeof(*res) * (size));
	(void) len;
	if (!res)
		return (ft_free(&temp, 0));
	i = ft_find_ln(temp) + 1;
	j = 0;
	while (temp[i])
	{
		res[j] = temp[i];
		++j;
		++i;
	}
	res[j] = '\0';
	ft_free(&temp, 0);
	return (res);
}

char	*ft_strdup(char *src, int len)
{
	char	*new_src;
	int		i;

	i = 0;
	new_src = malloc (sizeof(*new_src) * (ft_strlen(src) + 1));
	if (!new_src)
		return (0);
	while (i < len)
	{
		new_src[i] = src[i];
		++i;
	}
	new_src[i] = '\0';
	return (new_src);
}
