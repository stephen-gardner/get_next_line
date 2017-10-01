/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgardner <stephenbgardner@gmail.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 13:06:04 by sgardner          #+#    #+#             */
/*   Updated: 2017/09/29 12:21:08 by sgardner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <stdlib.h>
# include <unistd.h>
# include "libft.h"
# define BUFF_SIZE 32

typedef struct	s_file
{
	int				fd;
	size_t			offset;
	char			*buffer;
	struct s_file	*next;
}				t_file;

int				get_next_line(const int fd, char **line);
#endif
