/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/08 17:18:13 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/20 05:04:21 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_malloc(unsigned int size);
void ft_free(void *ptr);
void ft_bzero (void *src, unsigned int size);
void *ft_memcpy (void *dest, const void *src, int n);

void *ft_realloc(void *replace, unsigned int size)
{
  char *ptr;

  if (!(ptr = (char *)ft_malloc(size)))
    return (NULL);
  ft_bzero (ptr, size);
  ft_memcpy(ptr, (char *)replace, sizeof(*replace));
  ft_free(replace);
  return ((void *)ptr);
}
