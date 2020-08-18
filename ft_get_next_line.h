/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_next_line.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eesaki <eesaki@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 15:16:33 by eesaki            #+#    #+#             */
/*   Updated: 2020/08/18 20:24:22 by eesaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GET_NEXT_LINE_H
# define FT_GET_NEXT_LINE_H

# define BUFF_SIZE 32
# define FD_MAX 1024

# include "libft.h"
# include <fcntl.h>

int		ft_get_next_line(const int fd, char **line);

#endif
