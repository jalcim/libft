/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 16:35:45 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/14 14:10:41 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_malloc(unsigned int size);
void ft_bzero (void *src, unsigned int size);

char *ft_strnew(unsigned int size)
{
  char *str;

  if (!(str = (char *)ft_malloc(size * sizeof(char))))
    return (NULL);
  ft_bzero(str, size);

  return (str);
}
