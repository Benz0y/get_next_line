/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rperello <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:44:25 by rperello          #+#    #+#             */
/*   Updated: 2025/03/11 05:16:13 by rperello         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h> //includes read()
# include <stdlib.h> //includes malloc() and free()
# include <stddef.h> //size_t

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

// PROTOTYPE MAIN FUNC
char	*get_next_line(int fd);
char	*new_line(char *all_readed);
char	*extract_line(char *all_readed);
char	*read_to_n(int fd, char *all_readed);

// FUNC AUX (utils.c)
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *all_readed, char *buff);
char	*ft_strchr(const char *s, int c);

#endif
