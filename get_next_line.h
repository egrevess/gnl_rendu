/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egrevess <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:42:31 by egrevess          #+#    #+#             */
/*   Updated: 2022/11/07 17:10:02 by egrevess         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

int		ft_find_ln(char *str);
char	*ft_free(char **str, char **str2);
char	*get_next_line(int fd);
int		ft_strlen(char *str);
char	*ft_strcat(char *temp, char **buff);
char	*strcpy_untill_nl(char **temp);
char	*strcpy_from_nl(char *temp, int len);
char	*ft_strdup(char *src, int len);

#endif 
