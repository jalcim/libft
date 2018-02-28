/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalcim <jalcim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 17:02:09 by jalcim            #+#    #+#             */
/*   Updated: 2014/04/14 14:04:19 by jalcim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void *ft_malloc(unsigned int size);

char *ft_strsub(const char *s1, unsigned int start, unsigned int
 len)
{
  unsigned int compt;
  char *s2;

  if (!(s2 = (char *)ft_malloc((len + 1) * sizeof(char))))
    return (NULL);
  compt = 0;
  while (compt < len)
    s2[compt++] = s1[start++];
  s2[compt] = '\0';

  return (s2);
}
