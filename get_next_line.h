/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpole <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 11:59:28 by bpole             #+#    #+#             */
/*   Updated: 2019/11/19 19:57:57 by bpole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 500

# include "libft/libft.h"
# include "fcntl.h"
# include <stdlib.h>

typedef struct		s_lst
{
	char			*res;
	int				fd;
	struct s_lst	*next;
}					t_lst;

int					get_next_line(const int fd, char **line);

#endif
