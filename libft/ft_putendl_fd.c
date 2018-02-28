/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 19:17:45 by jalcim            #+#    #+#             */
/*   Updated: 2013/12/01 18:52:31 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr_fd(const char *s, int fd);

void ft_putendl_fd(const char *s, int fd)
{
  ft_putstr_fd(s, fd);
  write(fd, "\n", 1);
}
