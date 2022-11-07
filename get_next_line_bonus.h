/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajeannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:47:07 by ajeannin          #+#    #+#             */
/*   Updated: 2022/10/17 17:54:48 by ajeannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1000
# endif 

char	*get_next_line(int fd);
char	*ft_read(int fd, char *stash);
char	*ft_get_line(char *stash);
char	*ft_update_stash(char *stash);
char	*ft_strjoin(char *stash, char *buffer);
char	*ft_is_newline(char *stash);
int		ft_strlen(char *str);

#endif
