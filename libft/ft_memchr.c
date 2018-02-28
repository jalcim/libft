/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 02:46:26 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/20 05:20:48 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memchr(const void *src, int c, int size)
{
  unsigned char	*s1;

  s1 = (unsigned char *)src;
  while (*s1 && size--)
    {
      if (*s1 == c)
	return ((void *)s1);
      s1++;
    }

  return (NULL);
}
