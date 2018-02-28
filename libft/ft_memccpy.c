/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:02:43 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/20 05:11:15 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_memccpy (void *dest, const void *src, int c, unsigned int size)
{
  unsigned char	*s1;
  unsigned char *s2;

  if (dest && src && c && size)
    {
      s1 = (unsigned char *)dest;
      s2 = (unsigned char *)src;
      while (size--)
	{
	  if (*s2 == c)
	    {
	      *s1 = '\0';
	      return (s2 + 1);
	    }
	  *s1++ = *s2++;
	}
    }
  return (NULL);
}
